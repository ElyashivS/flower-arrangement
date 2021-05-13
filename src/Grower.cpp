#include "../include/Grower.h"
#include "../include/Florist.h"

Grower::Grower(std::string name, Gardener* gardener) : Person(name), gardener(gardener){

}

FlowersBouquet *Grower::prepareOrder(std::vector<std::string> flowers) {
    std::cout << getName() << " forwards the request to " << gardener->getName() << std::endl;
    FlowersBouquet* flowersBouquet =  gardener->prepareBouquet(flowers);
    std::cout << gardener->getName() << " returns flowers to " << getName() << std::endl;
    return flowersBouquet;
}

std::string Grower::getName() {
    return "Grower " + Person::getName();
}
