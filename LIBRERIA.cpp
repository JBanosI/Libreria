#include "LIBRERIA.h"
#include "LIBRO.h"
#include<iostream>
#include<cstdlib>
#include<stdio.h>
#include<fstream>
using namespace std;

LIBRERIA::LIBRERIA()
{
    //ctor
}

LIBRERIA::~LIBRERIA()
{
    delete []libros;
}
void LIBRERIA::leer_libros()
{
    cout<<"-------------REGISTRO DE LIBROS----------------"<<endl<<endl<<endl<<endl<<endl;
    fflush(stdin);
    cout<<endl<<endl<<endl<<"Ingrese su nombre: "<<endl;
    getline(cin,nombre);
    fflush(stdin);
    cout<<"Ingrese la sucursal: "<<endl;
    getline(cin,sucursal);
    system("cls");
    cout<<"Ingrese la cantidad de libros que desea registrar: "<<endl;
    cin>>N;
    system("cls");
    fflush(stdin);
    libros=new LIBRO[N];
    for(int i=0;i<N;i++)
    {
        libros[i].leer_libro();
    }
}
void LIBRERIA::imprimir_libros()
{
    for(int i=0;i<N;i++)
    {
        cout<<"Nombre:  "<<nombre<<endl;
        cout<<"Sucursal: "<<sucursal<<endl;
        cout<<endl<<endl;
        libros[i].imprimir_libro();
    }
    system("cls");
}
void LIBRERIA::guardar_libros()
{
    for(int i=0;i<N;i++)
    {
        libros[i].guardar_libro();
    }
}
void LIBRERIA::leer_archivo()
{
    cout<<"-----------------------------REGISTRO GLOBAL----------------------------"<<endl;
    ifstream archivo;
    string texto;
    archivo.open("libro.csv");
    if(archivo.fail())
    {
        cout<<"Error de lectura"<<endl;
    }
    else
    {
        while(!archivo.eof())
        {
            getline(archivo,texto);
            cout<<texto<<endl;
        }
    }
    archivo.close();
}
void LIBRERIA::ventas_totales()
{
    float ventas,suma;
    suma=0;
    for(int i=0;i<N;i++)
    {
        ventas=libros[i].no_libros*libros[i].precio;
        suma+=ventas;
    }
    system("color 02");
    cout<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<"\t\t\t\tEl total de ventas es: $"<<suma<<endl;
    cout<<endl<<endl<<endl<<endl<<endl<<endl;
}
