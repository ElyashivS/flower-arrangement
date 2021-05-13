#include "../include/FlowerArrenger.h"

FlowerArrenger::FlowerArrenger(std::string name, std::vector<std::string>) : Person(name) {

}

std::string FlowerArrenger::getName() {
    return Person::getName();
}

void FlowerArrenger::arrangeFlowers(FlowersBouquet *flowersBouquet) {
    flowersBouquet->arrange();
    std::cout << getName() << " arranges flowers" << std::endl;
}

