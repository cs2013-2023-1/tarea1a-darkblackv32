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
    Matriz2D m2 = t(m1);
    cout << m2;
    cout << m2.getFilas();
    cout << m2.getColumnas() ;
   
}