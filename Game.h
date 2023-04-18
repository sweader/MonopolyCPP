#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <time.h>
#pragma once
    class game{//base class with all our game stuff
    std::vector<std::string> props = {"Old Kent road","Whitechapel road","Kings Cross station","The Angel, Islington",
    "Euston Road","Pentonville Road","Pall Mall","Electric company",
    "Whitehall","Northumberland Avenue","Marylebone Station","Bow Street","Marlborough Street","Vine Street", "Strand", "Fleet Street", "Trafalgar Square","Fenchurch St Station","Leicester Square",
    "Coventry Street", "Water Works","Piccadilly", "Regent Street", "Oxford Street", "Bond Street", "Park Lane", "Mayfair"}; // all propeties and prices
    std::vector<int> prices = {60,60,200,100,100,120,140,150,140,160,200,180,180,200,220,220,240,200,260,260,150,280,300,300,320};
    public:
};