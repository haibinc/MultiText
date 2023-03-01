//
// Created by Haibin Cao on 2/28/23.
//

#include "MultiText.h"

MultiText::MultiText()
{

}

std::list<Letter>::iterator MultiText::begin()
{
    return listOfLetters.begin();
}

std::list<Letter>::iterator MultiText::end()
{
    return listOfLetters.end();
}

void MultiText::setString(const std::string& string)
{
    Letter letter;
    letter.setString(string);
    listOfLetters.push_back(letter);
}

void MultiText::removeLetter()
{
    listOfLetters.pop_back();
}

void MultiText::draw(sf::RenderTarget &window, sf::RenderStates states) const
{
    std::list<Letter>::const_iterator iterator;
    for (iterator = listOfLetters.begin(); iterator != listOfLetters.end() ; ++iterator)
    {
        window.draw(*iterator);
    }
}
