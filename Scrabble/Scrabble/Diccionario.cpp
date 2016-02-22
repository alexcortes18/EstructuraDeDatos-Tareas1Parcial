#include "Diccionario.h"

#include <fstream>
#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

Diccionario::Diccionario()
{

}

Diccionario::~Diccionario()
{
}

void Diccionario::buscar()
{

	bool nohay = false;
	string palabra;
	cout << "Ingrese una palabra:" << endl;
	cin >> palabra;
	cout << "Su palabra tiene: " << palabra.length() << " letras." << endl;

	//char letra[1];
	char mayus = toupper(palabra[0]);
	//letra[0] = mayus;
	//char archivo[] = " Words.txt";


	char finale[20] = { 'A', ' ','W','o','r','d','s','.','t','x','t' };
	//strcpy(finale, letra);
	//strcat(finale, archivo);
	finale[0] = mayus;
	cout << "El nombre final es: " << finale << endl;
	

	palabra[0] = tolower(palabra[0]);
	ifstream in(finale);
	string str;
	while (in >> str)
	{
		if (str == palabra)
		{
			cout << "La palabra fue encontrada!" << endl;
			nohay = false;
			break;
		}
		if (str != palabra)
			nohay = true;
	}
	if (nohay == true)
	{
		cout << "La palabra NO fue encontrada!" << endl;
	}
}

