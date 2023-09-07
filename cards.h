//
// Created by devan on 9/6/2023.
//
#include <string>
#include <vector>
#ifndef POKERHAND_CARDS_H
#define POKERHAND_CARDS_H
std::string suites[4] = {"Spades","Hearts", "Diamonds", "Clubs"};
class cards {
    std::string name;
    unsigned number;
    std::string suite;
    public:
        cards(std::string n, std::string s, unsigned val):
            number(val), suite(s), name(n) {};
};

std::vector<cards> deckMaker(){
    std::vector<cards> deck;
    for(int i = 0; i <= 12; ++i)
        deck.push_back(cards());

    return deck;
};

#endif //POKERHAND_CARDS_H
