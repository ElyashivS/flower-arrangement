
#include "../include/FlowersBouquet.h"

FlowersBouquet::FlowersBouquet(std::vector <std::string> bouquet) : bouquet(bouquet){
    isArrange = false;
}

void FlowersBouquet::arrange() {
    isArrange = true;
}

std::string FlowersBouquet::getName() {
    std::string s = "";
    s += "flowers: ";

    for (int i = 0; i < bouquet.size(); i++)
        s += bouquet[i] + ", ";

//    for (std::string flower: bouquet)
//        s += flower + ", ";
}
