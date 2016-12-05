
#include <iostream>
#include "Card.h"
#include "Deck.h"
#include <ctime>
#include <vector>
#include <cstdlib>
#include <algorithm>


Deck::Deck(){
    
    for (int i = 0; i < 4; i++){
        for(int j = 0; j < 13; j++){
            Card card(i, j);
            _deck.push_back(card);
            
        }
    }
}

void Deck::print_Deck(){
    for(int i = 0; i < _deck.size(); i++){
        _deck[i].print();
    }
}
void Deck::Shuffle(){        
    std::random_shuffle(_deck.begin(), _deck.end());
}

Card Deck::getOneCard(){   
    Card temp;
    temp = _deck.back();
    _deck.pop_back();
    return temp;
    
}
int Deck::getDeckSize(){
    return _deck.size();
}

