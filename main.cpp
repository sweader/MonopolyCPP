#include "Game.h"
#include "Player.h"
int main(){
    game obj;
    Player player;
    player.makeAMove();
    std::cout<< player.whereYouLanded();
    player.buyProp();
    return 0;    
}