//
// Created by devan on 9/6/2023.
//
#include <string>
#include <utility>
#include <vector>
#ifndef POKERHAND_CARDS_H
#define POKERHAND_CARDS_H
using namespace std;

class cards {
    string name;
    unsigned number;
    string suite;
    public:
        cards(string n, string s, unsigned val):
            number(val), suite(std::move(s)), name(std::move(n)) {};
    };

vector<cards> deckMaker() {
    vector<cards> deck;
    string suites[4] = {"Spades","Hearts", "Diamonds", "Clubs"};
    for (int i = 2; i <= 15; ++i) {
        cards spade = cards(to_string(i) + "of" + suites[0], suites[0], i),
                heart = cards(to_string(i) + "of" + suites[1], suites[1], i),
                diamond = cards(to_string(i) + "of" + suites[2], suites[2], i),
                club = cards(to_string(i) + "of" + suites[3], suites[3], i);
        deck.push_back(spade);
        deck.push_back(heart);
        deck.push_back(diamond);
        deck.push_back(club);
    };
    return deck;
};


#endif //POKERHAND_CARDS_H
