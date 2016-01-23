// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "list"
#include "fstream"
#include <array>

using namespace std ;

class nodo {
	public:
		string name;
		list<nodo> adj;
		int grupo = 0;
};

nodo grafos[];
int grupoActual = 1;

//-------
nodo* buscar(nodo grafo[]) {
	for (int i = 0; i < sizeof(grafo); i++)
	{
		if (grafo[i].grupo == 0)
			return &grafo[i];
	}
	return NULL;
}

void asignar(nodo actual) {
	actual.grupo = grupoActual;
}

void buscarPermitidos(nodo grafo[]) {
	for (int x = 0; x < sizeof(grafo); x++)
	{
		bool flag = true;
		if (grafo[x].grupo == 0) {
			for (nodo actual : grafo[x].adj) {
				if (actual.grupo == grupoActual)
					flag = false;
			}
		}
		if (flag)
			asignar(grafo[x]);
	}
}

int main()
{
	
	while (buscar(grafos) != NULL) {
		nodo* actual = buscar(grafos);
		asignar(*actual);
		buscarPermitidos(grafos);
		grupoActual++;
	}


	cin.get();

    return 0;
}

