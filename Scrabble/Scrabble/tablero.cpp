#include "tablero.h"
#include "Azulejos.h"
#include <SFML\Graphics.hpp>
#include <string>
#include <iostream>

using namespace std;




tablero::tablero()
{
}

tablero::tablero(sf::RenderWindow * window)
{
	//Azulejos azulejos(window);

	//Color rojo: (255,0,0)
	//Color azul: (0,100,255)
	if (!texture1.loadFromFile("whitetile.png"))
	{
		cout<< "error" <<endl;
	}	
	if (!texture.loadFromFile("azulejo.png"))
	{
		cout << "error" << endl;
	}

	sprite1.setTexture(texture1);
	sprite2.setTexture(texture1);
	sprite3.setTexture(texture1);
	sprite4.setTexture(texture);

	sprite1.setPosition(1000.f, 100.f);
	sprite2.setPosition(1000.f, 150.f);
	sprite3.setPosition(1000.f, 200.f);

	sprite2.setColor(sf::Color(255, 0, 0));
	sprite3.setColor(sf::Color(0, 100, 255));






	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			//myArray[i][j].setTexture(texture1);
			myArray[i][j] = sprite1;
			myArray[i][j].setPosition(100 + 50 * j, 100 + 50 * i);
			
			if (i == j)
			{
				myArray[i][j].setColor(sf::Color(255, 0, 0));
			}
			
			for (int x = 0; x < 225; x++)
			{
				if (x % 14 == 0)
					myArray[0][x].setColor(sf::Color(255, 0, 0));
			}
			

			window->draw(myArray[i][j]);
		}


	}


	// Lugares del tablero dbujadas a mano:
	lugareslocos(window);

}

void tablero::dibujartablero(sf::RenderWindow * window)
{
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			window->draw(myArray[i][j]);
		}
	}
}

sf::Sprite tablero::buscar(int a, int b)
{
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			int posx= myArray[i][j].getPosition().x;
			int posy= myArray[i][j].getPosition().y;

			int color1 = static_cast<int>(myArray[i][j].getColor().r);
			int color2 = static_cast<int>(myArray[i][j].getColor().g);
			int color3 = static_cast<int>(myArray[i][j].getColor().b);

			if ((a >= posx && a < (posx + 50)) && (b >= posy && b < (posy + 50)))
			{

				if (color1 == 255 && color2 == 255 && color3 == 255)
				{
					cout << "white" << endl;
					//return "white";
					return myArray[i][j];
				}
				if (color1 == 255 && color2 == 0 && color3 == 0)
				{
					cout << "rojo" << endl;
					return myArray[i][j];
					//return "rojo";
				}
				if (color1 == 0 && color2 == 100 && color3 == 255)
				{
					cout << "azul" << endl;
					return myArray[i][j];
					//return "azul";
				}
			}

			if (posx == a && posy == b)
				cout << "HOLA";
		}
	}
	return myArray[0][0];
	//return "";
}
int tablero::buscarposx(int a, int b)
{
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
				int posx = myArray[i][j].getPosition().x;
				int posy = myArray[i][j].getPosition().y;
				int color1 = static_cast<int>(myArray[i][j].getColor().r);
				int color2 = static_cast<int>(myArray[i][j].getColor().g);
				int color3 = static_cast<int>(myArray[i][j].getColor().b);

				if ((a >= posx && a < (posx + 50)) && (b >= posy && b < (posy + 50)))
					return posx;
		}
	}
	return -1;
}
int tablero::buscarposy(int a, int b)
{
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
				int posx = myArray[i][j].getPosition().x;
				int posy = myArray[i][j].getPosition().y;

				if ((a >= posx && a < (posx + 50)) && (b >= posy && b < (posy + 50)))
					return posy;
				//cout << posy << endl;
			
		}
	}
	return -2;
}

void tablero::actualizar(sf::Sprite viejo, int posx, int posy, sf::RenderWindow * window)
{

	sprite4 = viejo;
	//sprite4.setPosition(posx + 5, posy + 5);
	//window->draw(sprite4);

	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			int posx2 = myArray[i][j].getPosition().x;
			int posy2 = myArray[i][j].getPosition().y;
			if (posx == posx2 && posy == posy2)
			{
				myArray[i][j] = sprite4;
				myArray[i][j].setPosition(posx, posy);
			}
			window->draw(myArray[i][j]);
		}
	}
}



void tablero::lugareslocos(sf::RenderWindow * window)
{
	//---- AZULES
	parametros(0, 3, window);

	parametros(0, 11, window);

	parametros(1, 5, window);

	parametros(1, 9, window);

	parametros(2, 6, window);

	parametros(2, 8, window);

	parametros(3, 7, window);

	parametros(14, 3, window);

	parametros(14, 11, window);

	parametros(13, 5, window);

	parametros(13, 9, window);

	parametros(12, 6, window);

	parametros(12, 8, window);

	parametros(11, 7, window);

	parametros(3, 0, window);

	parametros(11, 0, window);

	parametros(5, 1, window);

	parametros(9, 1, window);

	parametros(6, 2, window);

	parametros(8, 2, window);

	parametros(7, 3, window);

	parametros(3, 14, window);

	parametros(11, 14, window);

	parametros(5, 13, window);

	parametros(9, 13, window);

	parametros(6, 12, window);

	parametros(8, 12, window);

	parametros(7, 11, window);

	//---- ROJOS

	parametrosrojo(0, 7, window);

	parametrosrojo(14, 7, window);

	parametrosrojo(7, 0, window);

	parametrosrojo(7, 14, window);

}

void tablero::parametros(int a, int b, sf::RenderWindow * window)
{
	myArray[a][b].setTexture(texture1);
	myArray[a][b].setPosition(100 + 50 * b, 100 + 50 * a);
	myArray[a][b].setColor(sf::Color(0, 100, 255));	
	window->draw(myArray[a][b]);
}
void tablero::parametrosrojo(int a, int b, sf::RenderWindow * window)
{
	myArray[a][b].setTexture(texture1);
	myArray[a][b].setPosition(100 + 50 * b, 100 + 50 * a);
	myArray[a][b].setColor(sf::Color(255, 0, 0));
	window->draw(myArray[a][b]);
}
