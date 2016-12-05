#include <iostream>
#include "Card.h"
#include "Deck.h"
#include <ctime>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include "HighLow.h"

Game::Game(){
    std::cout << "Start Game of High Low" <<std::endl;
    std::cout << "Cards have been shuffled" << std::endl;
    
    Deck myDeck;
    //myDeck.print_Deck();
    std::cout << "Your card is" << std::endl;
    myDeck.Shuffle();
    Card T;
    T = myDeck.getOneCard();
    T.print();
    int correctcounter = 0;
    while(myDeck.getDeckSize() > 0){
        Card T2;
        T2 = myDeck.getOneCard();
        
        int isHigher = 0;
       
       
        //std::cin >> isHigher;
        bool isvalid = false;
        while(!isvalid){
            std::cout << "is higher or lower(1/0)" << std::endl;
            std::cin >> isHigher;
            if( isHigher == 0 ||  isHigher == 1){
                 isvalid = true;
             }
             else{
                 std::cout << "Please enter 1 or 0" << std::endl;
             }
        }


        T2.print();
        int wasHigher = 0;
        
        if(T2.getfacevalue() > T.getfacevalue()){
            wasHigher = 1;
        }
        else if(T2.getfacevalue() < T.getfacevalue()){
            wasHigher = 0;
        }
        else{
            wasHigher = isHigher;
        }
        
        if(wasHigher == isHigher){
            correctcounter++;
        T = T2;
        }
        

    }
    std::cout << "you got this many correct" << " " << correctcounter << std::endl;
}
