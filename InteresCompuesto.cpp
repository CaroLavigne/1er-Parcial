#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double cantidad_invertir, interes_mensual;
    int meses_invertir;

    // Pedir datos al usuario
    cout << "Ingrese la cantidad a invertir: ";
    cin >> cantidad_invertir;

    cout << "Ingrese el interes compuesto mensual (en porcentaje): ";
    cin >> interes_mensual;

    cout << "Ingrese el número de meses a invertir: ";
    cin >> meses_invertir;

    // Convertir el interés mensual a decimal
    interes_mensual /= 100;

    // Mostrar el capital al final de cada año
    for (int i = 1; i <= meses_invertir; i++) {
        // Calcular el capital al final del año i usando la fórmula del interés compuesto
        double capital = cantidad_invertir * pow(1 + interes_mensual, 12 * i);
        cout << "Capital al final del año " << i << ": " << capital << endl;
    }

    return 0;
}