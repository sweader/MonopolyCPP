#include "Game.h"
class Player{
    std::vector<std::string> PlayerProps;
    int money = 0;    
    int position = 0;
    int random = 0;
    public:
        int makeAMove(){
            srand(time(NULL)); //need this to make everything sorta random
            random = 2 + rand() % 13; // makes a move in range from 2 to 12
            if((position + random) >= 27){ // checks if finished the lap or not
                position = 27-(position + random);
                money += 200; // adds money when the lap is finished
                return position;
            }
            position += random;
            return position;

        }
};