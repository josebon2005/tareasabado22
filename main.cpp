#include <iostream>
using namespace std;

void determinarSigno();

int main() {
    determinarSigno();
    return 0;
}

void determinarSigno() {
    int num;
    cout << "\nIngrese un numero: ";
    cin >> num;
    if (num > 0) cout << "El numero es positivo.\n";
    else if (num < 0) cout << "El numero es negativo.\n";
    else cout << "El numero es cero.\n";
}