#include "Game.h"
#include "Player.h"
int main(){
    game obj;
    Player player;
    player.makeAMove();
    std::cout<< player.whereYouLanded();
    return 0;    
}