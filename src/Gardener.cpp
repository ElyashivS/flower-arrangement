
#include "../include/Gardener.h"

Gardener::Gardener(std::string name) : Person(name) {

}

FlowersBouquet *Gardener::prepareBouquet(std::vector<std::string>) {
    std::cout << getName() << " prepares flowers" << std::endl;
    FlowersBouquet* flowersBouquet = new FlowersBouquet(flowers);
    return flowersBouquet;
}

std::string Gardener::getName() {
    return "Gardener " + Person::getName();
}
