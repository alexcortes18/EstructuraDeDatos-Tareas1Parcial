// prueba1real.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

using namespace std;

class Matriz
{
public:
	int valor;

	Matriz CrearMatriz(int filas, int columnas)
	{
		Matriz **matriz = new Matriz*[filas];
		for (int i = 0; i < filas; i++)
		{
			matriz[i] = new Matriz[columnas];
		}
		return **matriz;
	}

	void Asignar(Matriz **matriz, int fila, int columna, int elemento)
	{
		for (int i = 0; i < fila; i++)    
		{
			if (i == fila)
			{
				for (int j = 0; j < columna; j++) 
				{
					if (j == columna)
						matriz[i][j].valor = elemento;
				}
			}
		}
	}

	int ObtenerElemento(Matriz **matriz, int fila, int columna)
	{
		for (int i = 0; i < fila; i++)
		{
			if (i == fila)
			{
				for (int j = 0; j < columna; j++)
				{
					if (j == columna)
					{
						if (&matriz[i][j] != nullptr)
							return matriz[i][j].valor;
					}
				}
			}
		}
		return 0;
	}


};



int main()
{


    return 0;
}


