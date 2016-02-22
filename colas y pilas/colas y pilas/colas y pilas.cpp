// colas y pilas.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <queue>
#include <stack>
#include <string>

using namespace std;

class nodo{
public:
	char c;
	nodo* next;

};
class Pila {
	nodo* top;
	void push(nodo* x)
	{	
		x->next = top;
		top = x;
	};
	nodo* pop()
	{
		nodo* tmp = top;
		top = top->next;
		return tmp;
	};
};
class cola {
	nodo* frente;
	nodo* ultimo;



};



/*
void insertarEnPila(stack<Carta>pila1, Carta nueva, Carta frente)
{
	stack<Carta>pilatemp;
	while (!pila1.empty())
	{
		if (pila1.top().s != frente.s)
		{
			pilatemp.push(pila1.top());
			pila1.pop();
		}
		else
		{
			pila1.push(nueva);
			break;
		}
	}
	
	while (!pilatemp.empty())
	{
			pila1.push(pilatemp.top());
			pilatemp.pop();
	}
}

void eliminarEnPila(stack<Carta>pila1, Carta eliminar)
{
	stack<Carta>pilatemp;
	while (!pila1.empty())
	{
		if (pila1.top().s != eliminar.s)
		{
			pilatemp.push(pila1.top());
			pila1.pop();
		}
		else
		{
			pila1.pop();
			break;
		}
	}
	while (!pilatemp.empty())
	{
		pila1.push(pilatemp.top());
		pilatemp.pop();
	}
}

void insertarEnCola(queue<Carta>cola1, Carta nueva, Carta atras)
{
	queue<Carta>colatemp;
	bool ok = false;
	while (!cola1.empty())
	{
		if (cola1.front().s != atras.s)
		{
			colatemp.push(cola1.front());
			cola1.pop();
		}
		if(cola1.front().s == atras.s && !ok)
		{
			colatemp.push(nueva);
			ok = true;
		}
		if (ok)
		{
			colatemp.push(cola1.front());
			cola1.pop();
		}
	}
	cola1.swap(colatemp);
}

void eliminarEnCola(queue<Carta>cola1, Carta eliminar)
{
	queue<Carta>colatemp;
	while (!cola1.empty())
	{
		if (cola1.front().s != eliminar.s)
		{
			colatemp.push(cola1.front());
			cola1.pop();
		}
		else
		{
			cola1.pop();
		}
	}
	cola1.swap(colatemp);
}
*/

int main()
{
	
	queue<string>cola;
	cola.push("A");
	cola.push("B");
	cola.push("C");
	cola.push("D");

	while (!cola.empty())
	{
		std::cout<< cola.front() << endl;
		cola.pop();
	}

	cout << "--Pila--" << endl;
	stack<string>pila;
	pila.push("A");
	pila.push("B");
	pila.push("C");
	pila.push("D");
	while (!pila.empty())
	{
		cout << pila.top() << endl;
		pila.pop();
	}
	/*
	std::queue<int> foo, bar;
	//foo.push(10); foo.push(20); foo.push(30);
	bar.push(111); bar.push(222);

	bar.swap(foo);

	std::cout << "size of foo: " << foo.size() << '\n';
	std::cout << "size of bar: " << bar.size() << '\n';
	cout << endl;
	while (!foo.empty())
	{
		std::cout<< foo.front() << endl;
		foo.pop();
	}
	*/


	return 0;
}
