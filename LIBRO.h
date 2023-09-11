#ifndef LIBRO_H
#define LIBRO_H
#include<string>
#include "F:\Semestre 2-3\POO\Programas\Venta libros\FECHA.cpp"
using namespace std;


struct LIBRO
{
        LIBRO();
        ~LIBRO();
        string titulo,editorial,autor,pais;
        int no_libros;
        float precio;
        FECHA fecha_pub;
        void leer_libro();
        void imprimir_libro();
        void guardar_libro();

};

#endif // LIBRO_H
