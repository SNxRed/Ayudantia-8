#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int count = 0;

    cout << "Introduce 10 números enteros:" << endl;
    for (int i = 0; i < 10; ++i) {
        cin >> arr[i];
    }

    for (int i = 0; i < 10; ++i) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }

    cout << "El número de elementos pares es: " << count << endl;
    return 0;
}