#include <iostream>
using namespace std;
int main() {
    int num1, num2, num3;

    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    cout << "Ingrese el tercer número: ";
    cin >> num3;

    int max = num1;

    if (num2 > max) {
        max = num2;
    }

    if (num3 > max) {
        max = num3;
    }

    cout << "El número más grande es: " << max << endl;

    return 0;
}
