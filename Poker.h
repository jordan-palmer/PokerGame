#ifndef _POKER_H
#define _POKER_H


#include <string>
#include <vector>
#include <list>


class Poker{ 

public:

    Poker();
    
    int TwoofK(std::vector<Card>& myHand);
    int ThreeofK(std::vector<Card>& myHand);
    int FourofK(std::vector<Card>& myHand);
    int Straight(std::vector<Card>& myHand);
    int Flush(std::vector<Card>& myHand);

private:

    int FourofKcounter;
    int Flushcounter;
    int ThreeofKcounter;
    int TwoofKcounter;
    int Straightcounter;
};

#endif