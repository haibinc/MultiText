//
// Created by Haibin Cao on 2/28/23.
//
#include "Typing.h"

Typing::Typing()
{
}

void Typing::addEventHandler(sf::RenderWindow &window, sf::Event event)
{
    if(event.type == sf::Event::TextEntered)
    {
        if(event.text.unicode == '\b')
        {
            if(string.size() > 0)
            {
                string.pop_back();
                text.removeLetter();
            }
        }
        else if(event.text.unicode == 13)
        {
            addChar('\n');
        }
        else if(event.text.unicode < 128)
        {
            addChar(event.text.unicode);
            text.setString(string);
        }
    }
}

void Typing::update()
{

}

void Typing::draw(sf::RenderTarget &window, sf::RenderStates states) const
{
    window.draw(text);
}

void Typing::addChar(char letter)
{
    string += letter;
}

