#ifndef LIBRERIA_H
#define LIBRERIA_H
#include"LIBRO.h"
#include<string>
using namespace std;


class LIBRERIA
{
    public:
        LIBRERIA();
        ~LIBRERIA();
        void leer_libros();
        void imprimir_libros();
        void guardar_libros();
        void leer_archivo();
        void ventas_totales();

    protected:

    private:
        string nombre,sucursal;
        LIBRO *libros;
        int N;
};

#endif // LIBRERIA_H
