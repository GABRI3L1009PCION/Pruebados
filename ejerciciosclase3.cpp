//estructuras de control condicionales If-If Else

//programa para determinar si un usuario es mayor de edad o no
/*#include <iostream>

using namespace std;

int main() {
    // Pedir la edad al usuario
    int edad;
    cout << "Ingresa tu edad: ";
    cin >> edad;

    // Determinar si es mayor de edad o no
    if (edad >= 18) {
        cout << "Eres mayor de edad." << endl;
    } else {
        cout << "No eres mayor de edad." << endl;
    }

    return 0;
}

*/

//programa para determinar cual de los dos numeros es mayor
/* #include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    if (num1 > num2) {
        cout << "El primer número es mayor." << endl;
    } else if (num2 > num1) {
        cout << "El segundo número es mayor." << endl;
    } else {
        cout << "Los dos números son iguales." << endl;
    }

    return 0;
}
 */

//programa para determinar si un numero es par o impar
/* #include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Ingrese un número entero: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << num << " es un número par." << endl;
    } else {
        cout << num << " es un número impar." << endl;
    }

    return 0;
}
*/

//Estructuras de control Iterativas For-While

//programa para calcular factorial utilizando bucle while
/*#include <iostream>
using namespace std;

int main() {
    int n, i = 1, factorial = 1;
    cout << "Ingresa un número: ";
    cin >> n;
    while (i <= n) {
        factorial *= i;
        i++;
    }
    cout << "El factorial de " << n << " es " << factorial << endl;
    return 0;
}
 */

//programa que muestra por pantalla todos los números impares desde 1 hasta ese número utilizando un bucle for
/*#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese un número mayor a 10 y menor que 30: ";
    cin >> numero;
    if (numero > 10 && numero < 30) {
        for (int i = 1; i <= numero; i += 2) {
            cout << i << " ";
        }
    } else {
        cout << "El número ingresado no es válido." << endl;
    }
    return 0;
}
 */

//programa que muestra por pantalla todos los números impares desde 1 hasta ese número utilizando un bucle while
/*#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese un número mayor a 10 y menor que 30: ";
    cin >> numero;
    if (numero > 10 && numero < 30) {
        int i = 1;
        while (i <= numero) {
            cout << i << " ";
            i += 2;
        }
    } else {
        cout << "El número ingresado no es válido." << endl;
    }
    return 0;
}
*/

//Estructuras de control de seleccion switch

//programa que pida al usuario un número del 1 al 5 y muestre por pantalla el nombre del día de la semana correspondiente
/*#include <iostream>
#include <string>

int main() {
    int numero;
    std::cout << "Ingrese un número del 1 al 5: ";
    std::cin >> numero;

    switch (numero) {
        case 1:
            std::cout << "Lunes" << std::endl;
            break;
        case 2:
            std::cout << "Martes" << std::endl;
            break;
        case 3:
            std::cout << "Miércoles" << std::endl;
            break;
        case 4:
            std::cout << "Jueves" << std::endl;
            break;
        case 5:
            std::cout << "Viernes" << std::endl;
            break;
        default:
            std::cout << "El número ingresado no es válido." << std::endl;
    }

    return 0;
}
*/
