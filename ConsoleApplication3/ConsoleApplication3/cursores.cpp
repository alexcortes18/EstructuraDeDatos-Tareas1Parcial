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

Carta buscar(char a, int lista) {
	
	while ((cartas[lista].valor != a) && lista!=-1) {
		lista = cartas[lista].next;
	}
	if(lista != -1)
		return cartas[lista];
	return NULL;
}

Carta buscarAnterior(char a, int lista) {
	int ant;
	while ((cartas[lista].valor != a) && lista != -1) {
		ant = lista;
		lista = cartas[lista].next;
	}
	if (lista != -1)
		return cartas[ant];
	return NULL;
}

void insertar(Carta carta, int lista, carta x) {
	while (lista != -1 &&  cartas[lista] != x ) {
		lista = cartas[lista].next;
	}
	if (disponible != -1 && lista != -1)
	{
		int sig = cartas[lista].next;
		cartas[lista].next = disponible;
		cartas[disponible] = carta;
		cartas[disponible].next = sig;
		disponible = cartas[disponible].next;
	}

}

void eliminar(Carta carta, int lista) {
	int ant;
	while (cartas[lista] != carta) {
		ant = lista;
		lista = cartas[lista].next;
	}
	//tmp = disponible;
	cartas[ant].next = cartas[lista].next;
	cartas[lista].next = disponible;
	cartas[lista] = NULL;
	disponible = lista;

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

