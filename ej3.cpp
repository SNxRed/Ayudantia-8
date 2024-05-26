#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];
    int scalar;

    cout << "Introduce los elementos de la matriz 3x3:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> matrix[i][j];
        }
    }

    cout << "Introduce el número entero para multiplicar la matriz:" << endl;
    cin >> scalar;

    cout << "La matriz resultante es:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matrix[i][j] * scalar << " ";
        }
        cout << endl;
    }

    return 0;
}