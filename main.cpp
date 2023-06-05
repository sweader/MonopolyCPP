#include "Game.h"
#include "Player.h"

int inputHandling(){
    int userInput;
    std::cin >> userInput;
    std::cout<<std::endl;
    return userInput;
}




int main(){
    game obj;
    Player player;
    /*
    * This whole logic gives a segfault after certain amount of inputs
    * Need to fix it
    * Works for now i guess
    */
    while(true){
        std::cout<<"What do you want to do\n1.Make a move?\n";
        int choice = inputHandling();
        if(choice == 1){
            player.makeAMove();
            std::cout<< player.whereYouLanded() <<std::endl;
            std::cout<< "Do you want to buy this property?\n1.Yes \n2.No \n";
            int yesOrNo = inputHandling();
            if(yesOrNo == 1){
                player.buyProp();
            }
        }





    }
    return 0;    
}