#include <string>
#include "../include/Florist.h"


Florist::Florist(std::string name, WholeSaler* wholeSaler, FlowerArrenger* flowerArranger, DeliveryPerson* deliveryPerson)
: Person(name), wholeSaler(wholeSaler), deliveryPerson(deliveryPerson), flowerArrenger(flowerArranger) {}



void Florist::acceptOrder(Person * person, std::vector<std::string> flowers) {
    std::cout << getName() << " forwards forwards request to " << wholeSaler->getName() << std::endl;
    FlowersBouquet* flowersBouquet = wholeSaler->acceptOrder(flowers);
    std::cout << wholeSaler->getName() << "returns flowers to " << getName() << std::endl;
    std::cout << getName() << " request flowers arrangement from " << flowerArrenger->getName() << std::endl;
    flowerArrenger->arrangeFlowers(flowersBouquet);
    std::cout << flowerArrenger->getName() << deliveryPerson->getName() << std::endl;
    std::cout << getName() << " forwards flowers to " << deliveryPerson->getName() << std::endl;
    deliveryPerson->deliver(person, flowersBouquet);
}

std::string Florist::getName() {
    return "Florist " + Person::getName();
}
