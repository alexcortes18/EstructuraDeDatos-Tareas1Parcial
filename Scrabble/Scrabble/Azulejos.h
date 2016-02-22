#pragma once
#include <SFML\Graphics.hpp>
#include <string>
#include <iostream>
#include "tablero.h"

class Azulejos 
{
public:
	sf::Texture texture;
	sf::Sprite myArray2[1][7];
	sf::Sprite sprite4, sprite2, sprite3;
	Azulejos();
	Azulejos(sf::RenderWindow * window);
	sf::Sprite  buscar(int a, int b);
	int buscarposx(int a, int b);
	int buscarposy(int a, int b);
	~Azulejos();
	void dibujarazulejos(sf::RenderWindow * window);
};

