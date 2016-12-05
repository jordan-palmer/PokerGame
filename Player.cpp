#include <iostream>
#include "Card.h"
#include "Deck.h"
#include <ctime>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include "Poker.h"
#include "Player.h"

Player::Player(Card card1, Card card2){
    _card1 = card1;
    _card2 = card2;
}

void Player::printhand(){
    _card1.print();
    _card2.print();
}

// void Player::dealRiver(){
//     for(int i = 0; i < 3; i++){
//         Card temp = myDeck.getOneCard();
//         community_cards.push_back(temp);
//         //return community_cards;
//     }
// }

// void dealRiver(){
//     for(int i = 0; i<3; i++){
//         Card temp = myDeck.getOneCard();
//         temp.print();
//         community_cards.push_back(temp);
   
//     }
// }

// void dealTurn(){
//     Card turn = myDeck.getOneCard();
//     turn.print();
//     community_cards.push_back(turn);
// }

// void dealFlop(){
//     Card flop = myDeck.getOneCard();
//     flop.print();
//     community_cards.push_back
// }