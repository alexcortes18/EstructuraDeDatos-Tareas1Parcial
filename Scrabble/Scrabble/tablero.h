#pragma once
#include <SFML\Graphics.hpp>
#include <string>
#include <iostream>
#include "Azulejos.h"

using namespace std;



class tablero
{
public:
	
	sf::Texture texture,texture1;
	sf::Sprite sprite1, sprite2, sprite3, sprite4;
	sf::Sprite myArray[15][15];
	tablero();
	tablero(sf::RenderWindow * window);
	sf::Sprite buscar(int i, int j);
	int buscarposx(int a, int b);
	int buscarposy(int a, int b);
	void actualizar(sf::Sprite viejo, int posx, int posy, sf::RenderWindow * window);
	void dibujartablero(sf::RenderWindow * window);
	void parametros(int a, int b, sf::RenderWindow * window);
	void parametrosrojo(int a, int b, sf::RenderWindow * window);
	//void dibujar(sf::Sprite nuevo, sf::Sprite viejo, int posx, int posy);
	//void dibujar(sf::Sprite nuevo, sf::Sprite viejo, int posx, int posy, sf::RenderWindow * window);
	//void dibujar(sf::Sprite viejo, int posx, int posy, sf::RenderWindow * window);
	void lugareslocos(sf::RenderWindow * window);
};

