#include "Game.h"
class Player{
    std::vector<std::string> PlayerProps;
    int money = 0;    
    int position = 0;
    int random = 0;
    game obj;
    public:
    Player(){
        money = 2000;
    }
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
        std::string whereYouLanded(){
            std::string currProp = obj.propGetter(position);
            int propPrice = obj.priceGetter(position);
            return "You're currently on property " + currProp + " it costs "+std::to_string(propPrice)+"\n";  
        }
        bool checkIfBought(std::string whatToCheck){
            int size = obj.getSizeOfBought();
            for(int i = 0; i < size;i++){
                if(obj.boughtPropItem(i) == whatToCheck ){
                    return true;
                }
            }
            return false;
        }
        void buyProp(){
            if(checkIfBought(obj.propGetter(position))){
                std::cout << "Already bought! \n";               
                return;

            }
            if(obj.priceGetter(position) <= money){
                money-=obj.priceGetter(position);
                PlayerProps.push_back(obj.propGetter(position));
                obj.appendToBought(obj.propGetter(position));
                std::cout<<"You succefully bought "+obj.propGetter(position) +"\n";
                return;
            }
            std::cout<<"Not enough money! \n";
            return;    
        }
};