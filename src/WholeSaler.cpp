#include "../include/WholeSaler.h"

WholeSaler::WholeSaler(std::string name, Grower* grower) : Person(name), grower(grower) {}

FlowersBouquet* WholeSaler::acceptOrder(std::vector <std::string>) {

}

const std::string &WholeSaler::getName() const {
    return name;
}