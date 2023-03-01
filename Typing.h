//
// Created by Haibin Cao on 2/28/23.
//

#ifndef TYPING_SFML_TYPING_H
#define TYPING_SFML_TYPING_H
#include <iostream>
#include "SFML/Graphics.hpp"
#include "MultiText.h"
#include "ResourceHandler.h"
#include "ResourceHolder.h"

class Typing : public sf::Drawable
{
private:
    MultiText text;
    std::string string;
public:
    Typing();
    void addEventHandler(sf::RenderWindow& window, sf::Event event);
    void update();
    void addChar(char letter);
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
};

#endif //TYPING_SFML_TYPING_H
