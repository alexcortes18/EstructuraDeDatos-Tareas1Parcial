#include <SFML/Graphics.hpp>
#include <fstream>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include "Diccionario.h"
#include "Tablero.h"
#include "Azulejos.h"



using namespace std;

int main()
{
	sf::RenderWindow window(sf::VideoMode(1820, 980), "Welcome to Scrabble!");
	sf::Sprite uno, dos;
	/**/
	//window.clear(sf::Color(100, 100, 100));
	
	
	sf::Font font;
	if (!font.loadFromFile("arial.ttf"))
		cout << "Cannot open font!" << endl;

	string sentence;
	sf::Text text(sentence,font,20);
	text.setColor(sf::Color(255, 0, 0));

	int posx=0;
	int posy=0;
	int posxazul=0;
	int posyazul=0;
	bool ok = false;
	tablero tablero(&window);
	Azulejos azulejo(&window);
	
	while (window.isOpen())
	{
		window.clear(sf::Color(150, 150, 150));
		tablero.dibujartablero(&window);
		azulejo.dibujarazulejos(&window);

		int xmouse = sf::Mouse::getPosition(window).x;
		int ymouse = sf::Mouse::getPosition(window).y;

		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			if (event.type == sf::Event::MouseMoved)
			{

				posx = tablero.buscarposx(xmouse, ymouse);
				posy = tablero.buscarposy(xmouse, ymouse);

				posxazul = azulejo.buscarposx(xmouse, ymouse);
				posyazul = azulejo.buscarposy(xmouse, ymouse);

				cout << "posx: " << posx << endl;
				cout << "posy: " << posy << endl;
				cout << "posxazul: " << posxazul << endl;
				cout << "posyazul: " << posyazul << endl;

				//cout<< "Posiciones en x,y: (" << sf::Mouse::getPosition(window).x << ", " << sf::Mouse::getPosition(window).y << ")\n\n";	
			}
			if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
			{
				/*
				tablero.buscar(xmouse, ymouse);
				azulejo.buscar(xmouse, ymouse);
				cout << "siii..." << endl;
				*/
			}
			if (posxazul >= 900 && posxazul<940 && posyazul >= 325 && posyazul<605 && sf::Mouse::isButtonPressed(sf::Mouse::Left))
			{
					uno = azulejo.buscar(xmouse, ymouse);
					ok = true;
					cout << "CLICKED 1!" << endl;
					
			}
			if ((sf::Mouse::isButtonPressed(sf::Mouse::Left)) && (posx >= 100 && posx < 850 && posy >= 100 && posy < 850) && ok)
			{
				dos = tablero.buscar(xmouse, ymouse);
				tablero.actualizar(uno, posx, posy, &window);
				cout << "CLICKED 2!" << endl;
				ok = false;
			}
			
			if (event.type == sf::Event::TextEntered)
			{
				if (event.text.unicode >= 32 && event.text.unicode <= 126)
				{
					sentence += (char)event.text.unicode;
				}
				else if (event.text.unicode == 8 && sentence.size() > 0)
					sentence.erase(sentence.size() - 1, sentence.size());

				text.setString(sentence);
			}
		}
		
		
		window.draw(text);
		window.display();
		
		
	}
	

	while (true)
	{
		Diccionario diccionario;
		diccionario.buscar();
	
	}
	return 0;

}







