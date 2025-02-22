#include <iostream>
using namespace std;

void determinarSigno();
void verificarParidad();
void mayorDeTres();
void anioBisiesto();
void vocalOConsonante();
void esPrimo();
void anioNacimientoValido();
void multiplo5y7();
void calificacion();
void calcularDescuento();  // Declaramos la nueva función

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

        // El switch con las opciones
        switch (opcion) {
            case 1:
                determinarSigno();
                break;
            case 2:
                verificarParidad();
                break;
            case 3:
                mayorDeTres();
                break;
            case 4:
                anioBisiesto();
                break;
            case 5:
                vocalOConsonante();
                break;
            case 6:
                esPrimo();
                break;
            case 7:
                anioNacimientoValido();
                break;
            case 8:
                multiplo5y7();
                break;
            case 9:
                calificacion();
                break;
            case 10:
                calcularDescuento();  // Llamamos a la función para calcular descuento
                break;
            case 0:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opcion invalida, intente de nuevo.\n";
        }
    } while (opcion != 0);

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

void vocalOConsonante() {
    char letra;
    cout << "\nIngrese una letra: ";
    cin >> letra;
    letra = tolower(letra); // Convertir a minúscula para evitar problemas

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
        cout << "Es una vocal.\n";
    else if ((letra >= 'a' && letra <= 'z'))
        cout << "Es una consonante.\n";
    else
        cout << "No es una letra válida.\n";
}

void esPrimo() {
    int num, i;
    bool primo = true;

    cout << "\nIngrese un numero: ";
    cin >> num;

    if (num <= 1) {
        primo = false;
    } else {
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                primo = false;
                break;
            }
        }
    }

    if (primo)
        cout << "El numero es primo.\n";
    else
        cout << "El numero no es primo.\n";
}

void anioNacimientoValido() {
    int anio;
    int anioActual = 2024;

    cout << "\nIngrese su año de nacimiento: ";
    cin >> anio;

    if (anio > 1900 && anio < anioActual)
        cout << "Año de nacimiento válido.\n";
    else
        cout << "Año de nacimiento inválido.\n";
}

void multiplo5y7() {
    int num;
    cout << "\nIngrese un numero: ";
    cin >> num;

    if (num % 5 == 0 && num % 7 == 0)
        cout << "El numero es multiplo de 5 y 7.\n";
    else
        cout << "El numero no es multiplo de 5 y 7.\n";
}

void calificacion() {
    int nota;
    cout << "\nIngrese la calificación (0-100): ";
    cin >> nota;

    if (nota >= 90)
        cout << "Calificación: A\n";
    else if (nota >= 80)
        cout << "Calificación: B\n";
    else if (nota >= 70)
        cout << "Calificación: C\n";
    else if (nota >= 60)
        cout << "Calificación: D\n";
    else
        cout << "Calificación: F\n";
}

void calcularDescuento() {
    float precio, porcentaje;

    cout << "\nIngrese el precio del articulo: ";
    cin >> precio;
    cout << "Ingrese el porcentaje de descuento: ";
    cin >> porcentaje;

    float descuento = precio * (porcentaje / 100);
    float precioFinal = precio - descuento;

    cout << "El precio con descuento es: " << precioFinal << endl;
}
