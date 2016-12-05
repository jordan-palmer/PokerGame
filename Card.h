//Jordan Palmer

#ifndef _CARD_H
#define _CARD_H


#include <string>
#include <vector>


class Card{ 

public:

    Card();
    Card(int suit,int facevalue);
    void print();
    std::string get_suit();
    std::string get_facevalue();
    int getfacevalue();
    int getsuit();
    
protected:

    int num_suit;
    int num_facevalue;
 
    std::string _suit;
    std::string _facevalue;
    
};

#endif