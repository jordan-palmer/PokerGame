#include <iostream>
#include "Card.h"
#include "Deck.h"
#include <ctime>
#include <vector>
#include <list>
#include <cstdlib>
#include <algorithm>
#include "Poker.h"
#include "Player.h"

//Note the .getfacevalue() gives 1 less of the actual facevalue
bool compare(Card c, Card v){ //boolean functions used to sort vectors of objects.
    return c.getfacevalue() > v.getfacevalue();
}
bool comparesuits(Card t, Card y){
    return t.getsuit() > y.getsuit();
}

Poker::Poker(){
    std::cout << "Start Game of Texas Hold'em'" <<std::endl;
    std::cout << "Cards have been shuffled" << std::endl;
    
    Deck myDeck;
    myDeck.Shuffle(); //Uses random_shuffle 

    Card a = myDeck.getOneCard(); //Creates 4 Cards 
    Card b = myDeck.getOneCard();
    Card c = myDeck.getOneCard();
    Card d = myDeck.getOneCard();

    Player player1(a,c); //deal cards out for the purpose of printing 
    Player player2(b,d);

    std::vector<Card> community_cards; //Vector of commmunity cards for purpose of printing
    std::vector<Card> player1cards; //Combination of community_cards and Card a and c
    std::vector<Card> player2cards; // Combination of community_cards and Card b and d

    std::cout << "Player 1's hand: " << std::endl;
    player1.printhand();
    std::cout << "Player 2's hand: " << std::endl;
    player2.printhand();
    std::cout << "The commmunity cards are: " << std::endl;

    //deal flop
    for(int i = 0; i <= 3; i++){ //puts three cards from myDeck into community_cards, player1cards and player2cards.

        Card temp = myDeck.getOneCard();
        community_cards.push_back(temp);
        player1cards.push_back(temp);
        player2cards.push_back(temp);
        
    }

    
    //Deal turn
    Card turn = myDeck.getOneCard(); //puts one card from myDeck into community_cards, player1cards and player2cards.
    community_cards.push_back(turn);
    player1cards.push_back(turn);
    player2cards.push_back(turn);
    //Deal river
    Card river = myDeck.getOneCard(); //puts one card from myDeck into community_cards, player1cards and player2cards.
    community_cards.push_back(river);
    player1cards.push_back(river);
    player2cards.push_back(river);

    for(int i = 0; i < 5; i++){
        community_cards[i].print();
        
    }

    player1cards.push_back(a); //Puts cards into the player vectors
    player1cards.push_back(c);
    player2cards.push_back(b);
    player2cards.push_back(d);


    
    //need to sort objects
    std::sort(player1cards.begin(), player1cards.end(), compare);
    std::sort(player2cards.begin(), player2cards.end(), compare);

    std::cout << "player 1 has the cards: " << std::endl;
    for(int i = 0; i < 7; i++){ //shows the 7 cards player 1 has

        player1cards[i].print();
        
    }
    std::cout << "player 2 has the cards: " << std::endl;

    for(int i = 0; i < 7; i++){ //shows the 7 cards player 2 has

        player2cards[i].print();
        
    }
    //two of a kind works 
    //three of a kind works 
    //four of a kind works
    //Flush works 

    //Generate cards that have specific ranks to check the methods (STRAIGHT)
    std::vector<Card> test;
    Card w = Card(1,2);
    Card e = Card(3,3);
    Card r = Card(3,4);
    Card t = Card(3,5);
    Card y = Card(3,6);
    Card u = Card(3,2);
    Card i = Card(1,3);

    test.push_back(w);
    test.push_back(e);
    test.push_back(r);
    test.push_back(t);
    test.push_back(y);
    test.push_back(u);
    test.push_back(i);
    std::sort(test.begin(), test.end(), compare);
    std::cout << "test vector: " << std::endl;
    int testsize = test.size();
    for(int i = 0; i < testsize; i++){
        test[i].print();
    }


    std::cout << ThreeofK(player1cards) << std::endl;
    std::cout << "test:  " << Straight(test) << std::endl;
    std::cout << TwoofK(player2cards) << std::endl;

    // Q U E S T I O N S    ! ! ! !

    //issue with the erase idea. When you do full house, you do threeofK and TwoofK but this will potentially erase 5. 
    //there could be a flush but we wont know if there is a two of a kind or three of a kind.

    //straight help !!

    // T E S T  ON PC!!!!!





}



//TOK 
int Poker::TwoofK(std::vector<Card>& _hand){ //Using two iterators, compare it to nx (which is one element ahead of it) if their facevalues are equal the counter increases.
    std::vector<Card>::iterator it;
    std::vector<Card>::iterator nx;
    std::vector<Card>::iterator nx2;
    int TwoofKcounter = 0;
    for(it = _hand.begin(); it != _hand.end()-2; it++){
        nx = std::next(it,1);
        nx2 = std::next(it,2);
        if( it->getfacevalue() == nx->getfacevalue() && nx->getfacevalue() != nx2->getfacevalue()){
            TwoofKcounter++;
        }

    }
    return TwoofKcounter;

}
//Three of a kind
int Poker::ThreeofK(std::vector<Card>& _hand){ //Using three iterators, compare it to nx (which is one element ahead of it) and nx to nx2 (2 ahead of it) if their facevalues are equal the counter increases.
    std::vector<Card>::iterator it;
    int ThreeofKcounter = 0;
    for(it = _hand.begin(); it != _hand.end()-3; it++){
        std::vector<Card>::iterator nx;
        std::vector<Card>::iterator nx2;
        
        nx = std::next(it,1);
        nx2 = std::next(it,2);
        
        if( it->getfacevalue() == nx->getfacevalue() && nx->getfacevalue() == nx2 ->getfacevalue()){
            ThreeofKcounter++;
            //_hand.erase(nx,nx2);
            std::cout << " " << std::endl;
        }
    }
    return ThreeofKcounter;
    //return _hand;
}
//Four of a kind
int Poker::FourofK(std::vector<Card>& _hand){//Using four iterators, compare it to nx (which is one element ahead of it) ,nx to nx2 (2 ahead of it) and nx2 to nx3 (3 ahead if it) if their facevalues are equal the counter increases.
    std::vector<Card>::iterator it;
    int FourofKcounter = 0;
    for(it = _hand.begin(); it != _hand.end()-3; it++){
        std::vector<Card>::iterator nx;
        std::vector<Card>::iterator nx2;
        std::vector<Card>::iterator nx3;
        nx = std::next(it,1);
        nx2 = std::next(it,2);
        nx3 = std::next(it,3);
        if( it->getfacevalue() == nx->getfacevalue() && nx->getfacevalue() == nx2 ->getfacevalue() && nx2 ->getfacevalue() == nx3->getfacevalue()){
            FourofKcounter++;
         
            std::cout << " " << std::endl;
        }
    }
    return FourofKcounter;
}
    
    // return _hand;

//Straight 
int Poker::Straight(std::vector<Card>& _hand){
	int straight = 0;
	int Straightcounter = 0;
	//make sure there are no duplicates
    std::vector<Card>::iterator it;
    std::vector<Card>::iterator nx;
    //int Straightcounter = 0;   
	for (it = _hand.begin(); it != _hand.end() - 2; it++){
		nx = std::next(it, 1);
		int a = it->getfacevalue();
		int b = nx->getfacevalue();
		if ((a-1) == b){
			straight++;
			if (straight == 4){
				Straightcounter++;
			}
		}
		else if (a == b){
		}
		else{
			straight = 0;
		}
	}


    return Straightcounter;
}

//FLush
int Poker::Flush(std::vector<Card>& _hand){ //compares 5 consecutive elements using 5 iterators similar to FourofK but if the suit values are the same the counter increase.
    std::vector<Card>::iterator it;
    int Flushcounter = 0;

       
    for(it = _hand.begin(); it != _hand.end()-5; it++){
        std::vector<Card>::iterator nx;
        std::vector<Card>::iterator nx2;
        std::vector<Card>::iterator nx3;
        std::vector<Card>::iterator nx4;
        nx = std::next(it,1);
        nx2 = std::next(it,2);
        nx3 = std::next(it,3);
        nx4 = std::next(it,4);
        if( it->getsuit() == nx->getsuit() && nx->getsuit() == nx2 ->getsuit() && nx2 ->getsuit() == nx3->getsuit() && nx3->getsuit() == nx4->getsuit()){
            Flushcounter++;
        }

    }
    return Flushcounter;
}
 
   


