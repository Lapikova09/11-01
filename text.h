#pragma once
#include <SFML/Graphics.hpp>
#include "Header.h"
sf::Font font;
int Score = 0;
struct Textobj{
	sf::Text text;
};
void TextobjInit(Textobj& text) {
	text.text.setString(std::to_string(Score));
	text.text.setFont(font);
	text.text.setCharacterSize(FONT_SIZE);
	text.text.setPosition(TEXT_POS);
}
void TextobjUpdate(Textobj& text) {

}
void textDraw(sf::RenderWindow& window, const Textobj& text) {
	window.draw(text.text);
}