#include <iostream>
#include "cards.h"
int main() {
    vector<cards> deck = deckMaker();
    for(int i = 0; i <= 51; ++i){
        std::cout<<deck[i].name<< std::endl;
    };
};
