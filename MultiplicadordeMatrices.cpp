#include <iostream>
#include <vector>

using namespace std;

//Paola Carolina Peña Ibarra 362323156
// Función para multiplicar dos matrices cuadradas de tamaño n x n
vector<vector<double>> multiplicarMatrices(const vector<vector<double>> &A, const vector<vector<double>> &B, int n) {
    vector<vector<double>> resultado(n, vector<double>(n, 0.0));

    for (int i = 0; i < n; ++i) {         // fila de A
        for (int j = 0; j < n; ++j) {     // columna de B
            for (int k = 0; k < n; ++k) { // suma de productos
                resultado[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    return resultado;
}

// Función para imprimir una matriz
void imprimirMatriz(const vector<vector<double>> &matriz) {
    for (const auto &fila : matriz) {
        for (double valor : fila) {
            cout << valor << "\t";
        }
        cout << endl;
    }
}

int main() {
    int n;

    cout << "Ingrese el tamaño de la matriz cuadrada (n): ";
    cin >> n;

    vector<vector<double>> A(n, vector<double>(n));
    vector<vector<double>> B(n, vector<double>(n));

    cout << "Ingrese los elementos de la matriz A:" << endl;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> A[i][j];

    cout << "Ingrese los elementos de la matriz B:" << endl;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> B[i][j];

    vector<vector<double>> resultado = multiplicarMatrices(A, B, n);

    cout << "Resultado de A x B:" << endl;
    imprimirMatriz(resultado);

    return 0;
}
