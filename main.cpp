#include <iostream>
#include <vector>
#include <string>
class Game{//base class with all our game stuff
    std::vector<std::string> props = { "Pall Mall",
    "Whitehall","Northumberland Avenue","Bow Street","Marlborough Street","	Vine Street", "Strand", "Fleet Street", "Trafalgar Square","Leicester Square",
        "Coventry Street", "Piccadilly", "Regent Street", "Oxford Street", "Bond Street", "Park Lane", "Mayfair"};
    std::vector<int> prices = {60,60,100,100,120,140,140,160,180,180,200,220,220,240,260,260,280,300,300,320};
    public:
        int buyProp(int index, int money){
            props.erase(props.begin() + index);
            return money - prices[index]; 
        }
        std::string getProp(int index){
            return props[index];
        }
};
class Player{
    std::vector<std::string> PlayerProps;
    int money = 0;    
    public:
        int getMoney(){
            return money;
        }
        int setMoney(int toWhat){
            money = toWhat;
            return 0;
        }
        int getAllprops(){
            for(int i =0; i < PlayerProps.size();i++){
                std::cout<< PlayerProps[i] << std::endl;
            }
            return 0;
        }
        int propManipulations(std::string AddWhat){
            PlayerProps.push_back(AddWhat);
            return 0;
        }
};
int main()
{
    Game board;
    Player p1;
    board.buyProp(2, 1000);
    std::cout << board.getProp(0) <<std::endl;
    p1.setMoney(2000);
    std::cout << p1.getMoney() <<std::endl;
    p1.propManipulations("Something");
    p1.propManipulations("another thing");
    p1.getAllprops();
    return 0;
}