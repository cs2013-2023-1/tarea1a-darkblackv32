// =============================================================================
// Tarea 1a: Matrices Dinamicas, Constructores y Sobrecarga de Operadores
// =============================================================================
// 1. Utilizar unicamente los archivos de cabecera y codigo fuente provistos. Es
//    decir: main.cpp, foo.h y foo.cpp.
// 2. No se permite el uso de librerias adicionales.

#include "foo.h"

// Puede validar su codigo con la siguiente funcion main
int main(){

    Matriz2D m1(5,6);
    Matriz2D m2 = m1;

    cout << m1 << endl;
    cout << m2 << endl;

    cout << t(m2) << endl;

    Matriz2D m3 = m1 * t(m2);

    cout << m3 << endl;
   
}