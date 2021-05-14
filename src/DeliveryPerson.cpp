#include "../include/DeliveryPerson.h"

DeliveryPerson::DeliveryPerson(std::string name, Person*) : Person(name) {}

void DeliveryPerson::deliver(Person* person, FlowersBouquet* flowersBouquet) {
    std::cout << this->getName() << " delivers flowers Robin" << std::endl;
    person->acceptFlowers(flowersBouquet);
}

std::string DeliveryPerson::getName() {
    return "Delivery Person " + Person::getName();
}
