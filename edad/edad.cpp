#include <iostream>

using namespace std;

const int AGNO_ACTUAL = 2019;

/*
 * Pre:  agnoNacimiento <= agnoActual
 * Post: Ha devuelto el valor entero que representa el número de años cumplidos
 *       en el año «agnoActual» por una persona nadica en el año
 *       «agnoNacimiento».
 */
int edad(int agnoNacimiento, int agnoActual) {
    return agnoActual - agnoNacimiento;
}

/*
 * Programa que ha preguntado al usuario por el año de su
 * nacimiento y le ha informado de la edad que ha cumplido o
 * cumplirá este año.
 */
int main() {
    int agnoNacimiento;
    cout << "Escribe el año de tu nacimiento: ";
    cin >> agnoNacimiento;

    cout << "En el " << AGNO_ACTUAL << " has cumplido o cumplirás "
         << edad(agnoNacimiento, AGNO_ACTUAL) << " años." << endl;
    return 0;
}
