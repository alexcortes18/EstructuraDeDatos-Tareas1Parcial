#pragma once
class Matriz
{
public:
	int ** valores;
	int filas, columnas;
	Matriz(int filas, int columnas);
	~Matriz();
	void CrearMatriz(int fila, int columna);
	void asignar(int fila, int columna,int elemento);
	int Obtenerelemento( int fila, int columna);
	Matriz* sumar(Matriz* matriz1, Matriz* matriz2);
	Matriz* ProductoEscalar(Matriz* matrix, int valor);
	void imprimir();
};

