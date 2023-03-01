//
// Created by Haibin Cao on 2/28/23.
//

#include "Letter.h"

Letter::Letter()
{
    ResourceHandler<Font, sf::Font>::load(Font::OPEN_SANS, "OpenSans-Bold.ttf");
    setFont(ResourceHandler<Font, sf::Font>::get(Font::OPEN_SANS));
    setCharacterSize(25);
    setPosition(50,50);
}

//const void Letter::setString(const std::string& string) const
//{
//    setString(string);
//}