//
// Created by devan on 9/6/2023.
//
#include <string>
#include <utility>
#include <vector>
#include <iostream>
#ifndef POKERHAND_CARDS_H
#define POKERHAND_CARDS_H
using namespace std;

class cards {
    public:
        string name;
        unsigned number;
        string suite;
        cards():
            number(), suite(), name() {};
        cards(string n, string s, unsigned val):
            number(val), suite(std::move(s)), name(std::move(n)) {};
    };

vector<cards> deckMaker() {
    vector<cards> deck;
    cards spade, heart, diamond, club;
    string suites[4] = {"Spades","Hearts", "Diamonds", "Clubs"};
    for (int i = 2; i <= 14; ++i){
        if(i >= 11){
            switch(i){
                case 11:
                    spade = cards("Jack of " + suites[0], suites[0],i);
                    heart = cards("Jack of " + suites[1], suites[1],i);
                    diamond = cards("Jack of " + suites[2], suites[2],i);
                    club = cards("Jack of " + suites[3], suites[3],i);
                    break;
                case 12:
                    spade = cards("Queen of " + suites[0], suites[0],i);
                    heart = cards("Queen of " + suites[1], suites[1],i);
                    diamond = cards("Queen of " + suites[2], suites[2],i);
                    club = cards("Queen of " + suites[3], suites[3],i);
                    break;
                case 13:
                    spade = cards("King of " + suites[0], suites[0],i);
                    heart = cards("King of " + suites[1], suites[1],i);
                    diamond = cards("King of " + suites[2], suites[2],i);
                    club = cards("King of " + suites[3], suites[3],i);
                    break;
                case 14:
                    spade = cards("Ace of " + suites[0], suites[0],i);
                    heart = cards("Ace of " + suites[1], suites[1],i);
                    diamond = cards("Ace of " + suites[2], suites[2],i);
                    club = cards("Ace of " + suites[3], suites[3],i);
                    break;
                default:
                    std::cout << "something went wrong" << std::endl;
            }
        }
        else{
            spade = cards(to_string(i) + " of " + suites[0], suites[0],i);
            heart = cards(to_string(i) + " of " + suites[1], suites[1],i),
            diamond = cards(to_string(i) + " of " + suites[2], suites[2],i),
            club = cards(to_string(i) + " of " + suites[3], suites[3],i);
        }
        deck.push_back(spade);
        deck.push_back(heart);
        deck.push_back(diamond);
        deck.push_back(club);
    };
    return deck;
};
#endif //POKERHAND_CARDS_H
