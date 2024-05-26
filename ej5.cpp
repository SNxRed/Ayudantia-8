#include <iostream>
using namespace std;

int main() {
    int arr[15];
    int num, count = 0;

    cout << "Introduce 15 números enteros:" << endl;
    for (int i = 0; i < 15; ++i) {
        cin >> arr[i];
    }

    cout << "Introduce el número a contar su frecuencia:" << endl;
    cin >> num;

    for (int i = 0; i < 15; ++i) {
        if (arr[i] == num) {
            count++;
        }
    }

    cout << "El número " << num << " aparece " << count << " veces en el arreglo." << endl;

    return 0;
}