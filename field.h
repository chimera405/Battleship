#pragma once
#include "LoadResources.h"

const int gridSize = 10;

class field {
	int playerGridX = 32, playerGridY = 64;
	int enemyGridX = 448, enemyGridY = 64;
public:
	sf::RectangleShape playerGridd[gridSize][gridSize];
	sf::RectangleShape playerGridBackground;
	sf::RectangleShape enemyGridd[gridSize][gridSize];
	sf::RectangleShape enemyHighlightCell;
	sf::RectangleShape enemyGridBackground;
	sf::RectangleShape ship1, ship2, ship3, ship4, ship5;

	sf::RectangleShape drawRectangle(float width, float height, sf::Vector2f position,
		const sf::Color& myFillColor, const sf::Color& myOutlineColor, float myOutlineThickness);
	sf::RectangleShape playerGrid();
	sf::RectangleShape enemyGrid();
	sf::RectangleShape ships();
};
