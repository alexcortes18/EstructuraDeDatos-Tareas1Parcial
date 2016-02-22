// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

class Carta 
{
public:
	char valor= 'A';
	int next=0;
};

Carta  cartas[];
int disponible = 0;




int crearlista(Carta carta) {

	int tmp = disponible;
	disponible = cartas[disponible].next;
	cartas[tmp] = carta;
	return tmp;
}

void agregar(Carta carta, int lista){
	while (cartas[lista].next != -1) {
		lista = cartas[lista].next;
	}
	int tmp = disponible;
	cartas[lista].next = tmp;
	disponible = cartas[disponible].next;
	cartas[tmp] = carta;
}

//falta: void insertar(carta carta, int lista, carta x){}
//falta: Carta buscar(Carta carta, int lista){}
//falta: eliminar
//falta: buscarAnterior;
//falta: inicializar cursor;

int main()
{
    return 0;
}

