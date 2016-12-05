#ifndef _PLAYER_H
#define _PLAYER_H

#include <string>
#include <vector>
#include <list>


class Player{ 

public:

    Player(Card card1, Card card2);
    void printhand();


protected:

    Card _card1;
    Card _card2;
    std::vector<Card> _hand;
    
    // Deck _dec;


};

#endif 