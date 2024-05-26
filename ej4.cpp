#include <iostream>
using namespace std;

int main() {
    int arr[5];

    cout << "Introduce 5 números enteros:" << endl;
    for (int i = 0; i < 5; ++i) {
        cin >> arr[i];
    }

    cout << "El arreglo invertido es:" << endl;
    for (int i = 4; i >= 0; --i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
