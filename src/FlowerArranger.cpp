#include "../include/FlowerArranger.h"

FlowerArranger::FlowerArranger(std::string name, std::vector<std::string>) : Person(name) {

}

std::string FlowerArranger::getName() {
    return "Flower Arranger " + Person::getName();
}

void FlowerArranger::arrangeFlowers(FlowersBouquet *flowersBouquet) {
    flowersBouquet->arrange();
    std::cout << getName() << " arranges flowers" << std::endl;
}

