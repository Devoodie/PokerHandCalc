#include <iostream>
#include "cards.h"
int main() {
    vector<cards> deck = deckMaker();
    for(int i = 0; i <= std::size(deck); ++i){
        std::cout<<deck[i].name<< std::endl;
    };
    std::cout << std::size(deck);
};
