#include <iostream>
using namespace std;

int main() {
    int A[3][3], B[3][3], C[3][3];

    cout << "Introduce los elementos de la primera matriz 3x3:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> A[i][j];
        }
    }

    cout << "Introduce los elementos de la segunda matriz 3x3:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> B[i][j];
        }
    }

    // Sumar las matrices
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "La suma de las matrices es:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}