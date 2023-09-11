#include <iostream>
#include"LIBRERIA.h"
#include"LIBRO.h"
#include<cstdlib>

using namespace std;

int main()
{
    LIBRERIA ob1;
        ob1.leer_libros();
        ob1.imprimir_libros();
        ob1.guardar_libros();
        ob1.leer_archivo();
        system("pause");
        system("cls");
        ob1.ventas_totales();

    return 0;
}
