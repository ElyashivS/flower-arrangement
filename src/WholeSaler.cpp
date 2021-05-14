#include "../include/WholeSaler.h"

WholeSaler::WholeSaler(std::string name, Grower* grower) : Person(name), grower(grower) {}

FlowersBouquet* WholeSaler::acceptOrder(const std::vector <std::string>& flowers) {
    std::cout << this->getName() << " forwards the request to " << grower->getName() << std::endl;
    FlowersBouquet* flowersBouquet =  grower->prepareOrder(flowers);
    std::cout << grower->getName() << " returns flowers to " << this->getName() << std::endl;
    return flowersBouquet;
}

std::string WholeSaler::getName() {
    return "WholeSaler " + Person::getName();
}