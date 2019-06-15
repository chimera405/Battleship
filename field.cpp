#include "field.h"

sf::RectangleShape field::drawRectangle(float width = 1.0f, float height=1.0f, sf::Vector2f position = sf::Vector2f(0, 0),
	const sf::Color& myFillColor = sf::Color::White, const sf::Color& myOutlineColor = sf::Color::Black,
	float myOutlineThickness = -2)
{
	sf::RectangleShape myRectangle;
	sf::Vector2f myRectangleSize(width, height);
	myRectangle.setSize(myRectangleSize);
	myRectangle.setPosition(position);
	myRectangle.setFillColor(myFillColor);
	myRectangle.setOutlineColor(myOutlineColor);
	myRectangle.setOutlineThickness(myOutlineThickness);
	return myRectangle;
}

sf::RectangleShape field::playerGrid(){
	playerGridBackground = drawRectangle(400, 600, sf::Vector2f(0, 0));
	playerGridBackground.setFillColor(sf::Color(51, 102, 153));
	playerGridBackground.setOutlineColor(sf::Color(51, 102, 153));
	for (int i = 0; i < gridSize; i++)
	{
		for (int j = 0; j < gridSize; j++)
		{
			playerGridd[i][j] = drawRectangle(32, 32, sf::Vector2f(playerGridX, playerGridY));
			playerGridd[i][j].setFillColor(sf::Color::Black);
			playerGridd[i][j].setOutlineColor(sf::Color(51, 102, 153));
			playerGridX += 32;
		}
		playerGridY += 32;
		playerGridX = 32;
	}
	return playerGridd, playerGridBackground;
}

sf::RectangleShape field::enemyGrid(){
	enemyHighlightCell = drawRectangle(32, 32);
	enemyHighlightCell.setFillColor(sf::Color::Black);
	enemyHighlightCell.setOutlineColor(sf::Color::Black);
	sf::RectangleShape enemyGridBackground = drawRectangle(400, 600, sf::Vector2f(400, 0));
	enemyGridBackground.setFillColor(sf::Color(0, 51, 102));
	enemyGridBackground.setOutlineColor(sf::Color(0, 51, 102));
	for (int i = 0; i < gridSize; i++)
	{
		for (int j = 0; j < gridSize; j++)
		{
			enemyGridd[i][j] = drawRectangle(32, 32, sf::Vector2f(enemyGridX, enemyGridY));
			enemyGridd[i][j].setFillColor(sf::Color::White);
			enemyGridd[i][j].setOutlineColor(sf::Color(0, 51, 102));
			enemyGridX += 32;
		}
		enemyGridY += 32;
		enemyGridX = 448;
	}
	return enemyGridd, enemyGridBackground, enemyHighlightCell;
}

sf::RectangleShape field::ships()
{
	sf::RenderWindow window(sf::VideoMode(800, 600, 32), "BattleShip");
	ship1 = drawRectangle(160, 32, sf::Vector2f(32, 416));
	sf::Texture ship1Texture = loadTexture("resources/ship1.png");
	ship1.setTexture(&ship1Texture);
	ship1.setFillColor(sf::Color(255, 255, 255));
	ship1.setOutlineColor(sf::Color(0, 0, 0));

	ship2 = drawRectangle(128, 32, sf::Vector2f(32, 453));
	sf::Texture ship2Texture = loadTexture("resources/ship2.png");
	ship2.setTexture(&ship2Texture);
	ship2.setFillColor(sf::Color(255, 255, 255));
	ship2.setOutlineColor(sf::Color(0, 0, 0));

	ship3 = drawRectangle(96, 32, sf::Vector2f(32, 490));
	sf::Texture ship3Texture = loadTexture("resources/ship3.png");
	ship3.setTexture(&ship3Texture);
	ship3.setFillColor(sf::Color(255, 255, 255));
	ship3.setOutlineColor(sf::Color(0, 0, 0));

	ship4 = drawRectangle(96, 32, sf::Vector2f(32, 527));
	sf::Texture ship4Texture = loadTexture("resources/ship4.png");
	ship4.setTexture(&ship4Texture);
	ship4.setFillColor(sf::Color(255, 255, 255));
	ship4.setOutlineColor(sf::Color(0, 0, 0));

	ship5 = drawRectangle(64, 32, sf::Vector2f(32, 564));
	sf::Texture ship5Texture = loadTexture("resources/ship5.png");
	ship5.setTexture(&ship5Texture);
	ship5.setFillColor(sf::Color(255, 255, 255));
	ship5.setOutlineColor(sf::Color(0, 0, 0));

	return ship1, ship2, ship3, ship4, ship5;
}
