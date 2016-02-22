// Tarea5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h> 
#include <iostream> 

using namespace std;

class Ordenar
{
public:
	void ordenar(int arreglo[], int x)
	{
		int temp;
		for (int i = 0; i < x; i++)
		{
			for (int j = 0; j < x - 1; j++)
			{
				if (arreglo[j] < arreglo[j + 1])
				{
					temp = arreglo[j];
					arreglo[j] = arreglo[j + 1];
					arreglo[j + 1] = temp;
				}
			}
		}
		for (int i = 0; i < x; i++)
		{
			cout << arreglo[i] << endl;
		}
	}

};
Ordenar orden;

int main()
{
	int n;

	int arr[10];
	for (int i = 0; i<10; i++)
	{
		cout << "Ingresa el numero " << i + 1 << ": ";
		cin >> n;
		arr[i] = n;
	}
	cout << endl << "Numeros ordenados de mayor a menor: " << endl;
	orden.ordenar(arr, 10);

	while (true)
	{

	}
	return 0;
}