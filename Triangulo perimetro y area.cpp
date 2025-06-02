#include <iostream>
#include <cmath> // Para usar sqrt()

using namespace std;
//Paola Carolina Peña Ibarra 362323156
int main() {
    float a, b, c, perimetro;
    
    cout << "Calculo del perimetro de un triangulo rectangulo" << endl;
    cout << "Dame el cateto opuesto: ";
    cin >> a;
    cout << "Dame el cateto adyacente: ";
    cin >> b;
    
    //Calculo de la hipotenusa
    c = sqrt((a*a)+(b*b));
    
    //Calculo del perimetro
    perimetro = a + b + c;
    
    cout << "La hipotenusa es: " << c << endl;
    cout << "El perimetro del triangulo es: " << perimetro << endl;
    
    return 0;
}
