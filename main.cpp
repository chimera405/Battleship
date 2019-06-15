#include <SFML/Graphics.hpp>
#include <iostream>
#include "LoadResources.h"
#include "game.h"

int main() {
	srand(time(NULL));
	Game game;
	game.runGame();
	return EXIT_SUCCESS; 
}