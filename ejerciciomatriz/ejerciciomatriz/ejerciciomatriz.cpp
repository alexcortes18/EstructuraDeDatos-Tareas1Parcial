// ejerciciomatriz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Matriz.h"
#include <iostream>

using namespace std;

int main()
{
	Matriz* matriz1= new Matriz (2,2);

	matriz1->asignar(2, 2, 5);
	matriz1->Obtenerelemento(2, 2);
	cout<< endl;
	matriz1->imprimir();

	while (true)
	{

	}


}

