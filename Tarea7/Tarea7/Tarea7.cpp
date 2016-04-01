// Tarea7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include "stdio.h"
#include "string"

using namespace std;

int main()
{
	string* titles = NULL;
	string* authors = NULL;

	int tamanio;

	cout << "Cuantos libros desea ingresar?";

	string entrada;

	cin >> tamanio;

	titles = new string[tamanio];
	authors = new string[tamanio];

	cout << "Por favor ingrese la siguiente información de los Libros: \n";
	for (int i = 0; i < tamanio; i++)
	{
		cout << "\n******* Libro " << i + 1 << "********:\n";
		cout << "Titulo: ";

		getline(cin, titles[i]);
		cout << "Autor: ";

		getline(cin, authors[i]);
	}

	delete[] titles;
	delete[] authors;
	titles = NULL;
	authors = NULL;



	return 0;
}