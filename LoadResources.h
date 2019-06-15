#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <string>
#include <sstream>
#include <windows.h>
#include <conio.h>

using namespace std;

sf::Font loadFont(const string& fontFilename);
sf::Texture loadTexture(const string& imageFilename);

