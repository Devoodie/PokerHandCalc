#include <iostream>
#include "cards.h"
int main() {
    vector<cards> cardsinplay;
    vector<cards> deck = deckMaker();
    std::string value = "9";
    std::string suite1 = "Diamonds";
    deckModifier(deck, value, suite1, cardsinplay);
    for(int i = 0; i <= std::size(deck); ++i){
        std::cout<<deck[i].name<< std::endl;
    };
    std::cout << std::size(deck);
};
