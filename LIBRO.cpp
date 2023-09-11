#include "LIBRO.h"
#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<fstream>
using namespace std;

LIBRO::LIBRO()
{
    autor=editorial=titulo="";
}

LIBRO::~LIBRO()
{
    //dtor
}
void LIBRO::leer_libro()
{
    fflush(stdin);
    cout<<"Ingrese el titulo del libro: "<<endl;
    getline(cin,titulo);
    fflush(stdin);
    cout<<"Ingrese la editorial: "<<endl;
    getline(cin,editorial);
    fflush(stdin);
    cout<<"Ingrese el nombre del autor: "<<endl;
    getline(cin,autor);
    cout<<"Ingrese el dia de publicacion: "<<endl;
    cin>>fecha_pub.dia;
    cout<<"Ingrese el mes de publicacion: "<<endl;
    cin>>fecha_pub.mes;
    cout<<"Ingrese el año de publicacion:  "<<endl;
    cin>>fecha_pub.anio;
    cout<<"Ingrese el numero de libros: "<<endl;
    cin>>no_libros;
    cout<<"Ingrese el precio: "<<endl;
    cin>>precio;

    system("cls");
    cout<<endl<<endl<<endl<<endl<<endl<<"----------------Datos guardados-----------"<<endl<<endl<<endl<<endl<<endl;
    system("pause");
    system("cls");
}
void LIBRO::imprimir_libro()
{
    cout<<"--------------------------Libros guardados--------------------"<<endl;
    cout<<"Titulo: "<<titulo<<endl;
    cout<<"Editorial: "<<editorial<<endl;
    cout<<"Autor: "<<autor<<endl;
    cout<<"fecha de publicacion: "<<fecha_pub.dia<<"-"<<fecha_pub.mes<<"-"<<fecha_pub.anio<<endl;
    cout<<"Numero de libros: "<<no_libros<<endl;
    cout<<"Precio: "<<precio<<endl;
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    system("pause");
    system("cls");
}
void LIBRO::guardar_libro()
{
    ofstream archivo;
    archivo.open("libro.csv",ios::app);
    if(archivo.fail())
        cout<<"Error de apertura"<<endl;
    else
    archivo<<"Titulo: "<<titulo<<endl;
    archivo<<"Editorial: "<<editorial<<endl;
    archivo<<"Autor: "<<autor<<endl;
    archivo<<"fecha de publicacion: \t "<<fecha_pub.dia<<" - "<<fecha_pub.mes<<" - "<<fecha_pub.anio<<endl;
    archivo<<"No. Libros: "<<no_libros<<endl;
    archivo<<"Precio: "<<precio<<endl;
    archivo<<endl<<endl<<endl<<endl;
    archivo.close();
}
