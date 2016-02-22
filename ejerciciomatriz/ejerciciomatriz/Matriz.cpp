#include "stdafx.h"
#include "Matriz.h"
#include <iostream>

using namespace std;


Matriz::Matriz(int filas, int columnas)
{
	this->filas = filas;
	this->columnas = columnas;

	valores = new int*[filas];
	for (int i = 0; i < columnas; i++)
	{
		valores[i] = new int[columnas];
	}

	/*
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
			valores[i][j] = 0;
	}
	*/
}
 

Matriz::~Matriz()
{

}

void Matriz::CrearMatriz(int filas, int columnas)
{
	
}

void Matriz::asignar(int fila, int columna, int elemento)
{
	//matrix.CrearMatriz(filas, columnas);
	if (fila >= 0 && fila < filas && columna>0 && columna < columnas)
	{
		valores[fila][columna] = elemento;
	}
}

int Matriz::Obtenerelemento(int fila, int columna)
{
	if (fila >= 0 && fila < filas && columna>0 && columna < columnas)
	{
		return valores[fila][columna];
	}


	return -1.50;
}

Matriz* Matriz::sumar(Matriz* matriz1, Matriz* matriz2)
{
	if (matriz1->filas == matriz2->filas && matriz1->columnas == matriz2->columnas)
	{
		int fila = matriz1->filas;
		int columna = matriz1->columnas;
		Matriz* matrix = new Matriz(fila, columna);
		matrix->CrearMatriz(fila, columna);

		for (int i = 0; i < fila; i++)
		{
			for (int j = 0; j < columna; j++)
			{
				matrix->asignar(i, j, matriz1->Obtenerelemento(i, j) + matriz2->Obtenerelemento(i, j));
			}
		}
		return matrix;
	}

	return NULL;
}

Matriz* Matriz::ProductoEscalar(Matriz* matrix, int valor)
{
	return matrix;
}

void Matriz::imprimir()
{
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			cout << Obtenerelemento(i, j) << " ";
		}
		cout << endl;
	}


}

