#include <iostream>
using namespace std;

void verificarParidad();
void mayorDeTres();
void anioBisiesto();  // Declaramos la nueva función

int main() {
    int opcion;

    do {
        // Menú de opciones
        cout << "\n--- MENU DE EJERCICIOS ---\n";
        cout << "1. Determinar si un numero es positivo, negativo o cero\n";
        cout << "2. Verificar si un numero es par o impar\n";
        cout << "3. Mostrar el mayor de tres numeros\n";
        cout << "4. Determinar si un ano es bisiesto\n";
        cout << "5. Verificar si una letra es vocal o consonante\n";
        cout << "6. Verificar si un numero es primo\n";
        cout << "7. Validar un ano de nacimiento\n";
        cout << "8. Verificar si un numero es multiplo de 5 y 7\n";
        cout << "9. Calcular calificacion en letra\n";
        cout << "10. Calcular precio con descuento\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        // Ejecutar la opción correspondiente
        switch (opcion) {
            case 1: verificarParidad(); break;  // Llamamos a la función para verificar paridad
            case 2: mayorDeTres(); break;  // Llamamos a la función para encontrar el mayor de tres números
            case 3: anioBisiesto(); break;  // Llamamos a la función para verificar si el año es bisiesto
            case 4: break;
            case 5: break;
            case 6: break;
            case 7: break;
            case 8: break;
            case 9: break;
            case 10: break;
            case 0: cout << "Saliendo del programa...\n"; break;
            default: cout << "Opcion invalida, intente de nuevo.\n";
        }
    } while (opcion != 0);

    return 0;
}

void verificarParidad() {
    int num;
    cout << "\nIngrese un numero: ";
    cin >> num;
    if (num % 2 == 0) cout << "El numero es par.\n";
    else cout << "El numero es impar.\n";
}

void mayorDeTres() {
    int a, b, c;
    cout << "\nIngrese tres numeros: ";
    cin >> a >> b >> c;
    if (a >= b && a >= c)
        cout << "El mayor es: " << a << endl;
    else if (b >= a && b >= c)
        cout << "El mayor es: " << b << endl;
    else
        cout << "El mayor es: " << c << endl;
}

void anioBisiesto() {
    int anio;
    cout << "\nIngrese un año: ";
    cin >> anio;
    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0))
        cout << "El año es bisiesto.\n";
    else
        cout << "El año no es bisiesto.\n";
}
