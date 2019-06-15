#include "LoadResources.h"

sf::Font loadFont(const string& fontFilename) {
	sf::Font myFont;
	if (!myFont.loadFromFile(fontFilename)) {
		cout << "Cannot load font from" << fontFilename << endl;
	}
	return myFont;
}

sf::Texture loadTexture(const string& imageFilename) {
	sf::Texture myTexture;
	if (!myTexture.loadFromFile(imageFilename)) {
		cout << "Cannot load from file" << imageFilename << endl;
	}
	return myTexture;
}