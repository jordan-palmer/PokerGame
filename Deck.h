#ifndef _DECK_H
#define _DECK_H

class Deck{ 

public:

    Deck();
    void print_Deck();
    Card getOneCard();
    void Shuffle();
    int getDeckSize();
    std::vector<Card> _deck;

//protected:

    
    

};

#endif