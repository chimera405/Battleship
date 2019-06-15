#include "game.h"

void Game::runGame(){
	int const screenWidth = 800;
	int const screenHeight = 600;
	int mouseX = 0;
	int mouseY = 0;
	
	bool play = true;
	bool mouseClicked = false;
	bool mouseInsideRect = false;
	bool draggingShip1 = false;
	bool draggingShip2 = false;
	bool draggingShip3 = false;
	bool draggingShip4 = false;
	bool draggingShip5 = false;

	sf::Font font = loadFont("resources/RobotoSlab-Bold.ttf");

	sf::Text playerText("PLAYER", font);
	playerText.setPosition(32, 32);
	playerText.setCharacterSize(32);
	playerText.setStyle(sf::Text::Bold);
	playerText.setFillColor(sf::Color::Black);

	sf::Text enemyText("ENEMY", font);
	enemyText.setPosition(448, 32);
	enemyText.setCharacterSize(32);
	enemyText.setStyle(sf::Text::Bold);
	enemyText.setFillColor(sf::Color::White);

	field field;
	field.playerGrid();
	field.enemyGrid();
	field.ships();

	sf::RenderWindow window(sf::VideoMode(screenWidth, screenHeight, 32), "BattleShip");
	sf::Vector2f mouseRectOffset;

	while (play == true)
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				window.close();
				break;
			}
		}
		window.clear(sf::Color(51, 153, 255));
		window.draw(field.playerGridBackground);
		window.draw(field.enemyGridBackground);
		window.draw(playerText);
		window.draw(enemyText);

		sf::Vector2i pointerPos = sf::Mouse::getPosition(window);

		for (int i = 0; i < gridSize; i++)
			for (int j = 0; j < gridSize; j++)
			{
				window.draw(field.playerGridd[i][j]);
				sf::FloatRect gridBounds = field.playerGridd[i][j].getGlobalBounds();
			}

		for (int i = 0; i < gridSize; i++)
			for (int j = 0; j < gridSize; j++)
			{
				window.draw(field.enemyGridd[i][j]);
				sf::FloatRect gridBounds = field.enemyGridd[i][j].getGlobalBounds();

				if (gridBounds.contains((sf::Vector2f)pointerPos))
				{
					field.enemyHighlightCell.setPosition(field.enemyGridd[i][j].getPosition());
					window.draw(field.enemyHighlightCell);
				}
			}
		window.draw(field.ship1);
		window.draw(field.ship2);
		window.draw(field.ship3);
		window.draw(field.ship4);
		window.draw(field.ship5);
		window.display();
	}
}