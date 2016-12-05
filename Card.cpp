#include <iostream>
#include "Card.h"
#include <ctime>
#include <vector>
#include <cstdlib>


Card::Card(int suit,int facevalue){ 
    num_suit = suit;
    num_facevalue = facevalue;

    if(suit == 0){
        _suit = "Spades";
    }
    else if(suit == 1){
        _suit = "Hearts";
    }
    else if(suit == 2){
        _suit = "Diamonds";
    }
    else if(suit == 3){
        _suit = "Clubs";
    }
    if(facevalue == 0){
        _facevalue = "Ace";
    }
    else if(facevalue == 1){
        _facevalue = "2";
    }
    else if(facevalue == 2){
        _facevalue = "3";
    }
    else if(facevalue == 3){
        _facevalue = "4";
    }
    else if(facevalue == 4){
        _facevalue = "5";
    }
    else if(facevalue == 5){
        _facevalue = "6";
    }
    else if(facevalue == 6){
        _facevalue = "7";
    }
    else if(facevalue == 7){
        _facevalue = "8";
    }
    else if(facevalue == 8){
        _facevalue = "9";
    }
    else if(facevalue == 9){
        _facevalue = "10";
    }
    else if(facevalue == 10){
        _facevalue = "Jack";
    }
    else if(facevalue == 11){
        _facevalue = "Queen";
    }
    else if(facevalue == 12){
        _facevalue = "King";
    }
}

Card::Card(){

    _suit = "0";
    _facevalue = "0";

}

void Card::print(){
    std::cout << get_facevalue() + " " + "of" + " " + get_suit() + "; " << std::endl;
}

std::string Card::get_suit(){
    return _suit;
}

std::string Card::get_facevalue(){
    return _facevalue;
}
int Card::getfacevalue(){
    return num_facevalue;
}
int Card::getsuit(){
    return num_suit;
}
