#include "Azulejos.h"
#include <SFML\Graphics.hpp>
#include <string>
#include <iostream>
#include "coladeazules.h"


using namespace std;

Azulejos::Azulejos()
{

}


Azulejos::Azulejos(sf::RenderWindow * window)
{
	if (!texture.loadFromFile("azulejo.png"))
	{
		cout << "error" << endl;
	}

	sprite4.setTexture(texture);
	

	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < 7; j++)
		{	
			myArray2[i][j] = sprite4;
			myArray2[i][j].setPosition( 900 , 325 + 40 * j);
		}
	}
}


Azulejos::~Azulejos()
{
}

void Azulejos::dibujarazulejos(sf::RenderWindow * window)
{
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			window->draw(myArray2[i][j]);
		}
	}
}

sf::Sprite Azulejos::buscar(int a, int b)
{
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			int posx = myArray2[i][j].getPosition().x;
			int posy = myArray2[i][j].getPosition().y;

			int color1 = static_cast<int>(myArray2[i][j].getColor().r);
			int color2 = static_cast<int>(myArray2[i][j].getColor().g);
			int color3 = static_cast<int>(myArray2[i][j].getColor().b);
			/*
			cout << "---" << endl;
			cout << color1 << endl;
			cout << color2 << endl;
			cout << color3 << endl;
			cout << "---" << endl;
			*/
			if ((a >= posx && a < (posx + 40)) && (b >= posy && b < (posy + 40)))
			{

				if (color1 == 255 && color2 == 255 && color3 == 255)
				{
					cout << "azulejo" << endl;
					return myArray2[i][j];
				}
			
			}

			if (posx == a && posy == b)
				cout << "HOLA";
		}
	}
	return myArray2[0][0];
}

int Azulejos::buscarposx(int a, int b)
{
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			int posx = myArray2[i][j].getPosition().x;
			int posy = myArray2[i][j].getPosition().y;

			if ((a >= posx && a < (posx + 40)) && (b >= posy && b < (posy + 40)))
				return posx;
		}
	}
	return -3;
}
int Azulejos::buscarposy(int a, int b)
{
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			int posx = myArray2[i][j].getPosition().x;
			int posy = myArray2[i][j].getPosition().y;

			if ((a >= posx && a < (posx + 40)) && (b >= posy && b < (posy + 40)))
				return posy;
		}
	}
	return -4;
}