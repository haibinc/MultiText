//
// Created by Haibin Cao on 2/28/23.
//

#ifndef MULTITEXT_MULTITEXT_H
#define MULTITEXT_MULTITEXT_H
#include <iostream>
#include <list>
#include "Letter.h"

class MultiText: public sf::Drawable
{
private:
    std::list<Letter> listOfLetters;
public:
    MultiText();
    std::list<Letter>::iterator begin();
    std::list<Letter>::iterator end();
    void setString(const std::string& string);
    void removeLetter();
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
};


#endif //MULTITEXT_MULTITEXT_H
