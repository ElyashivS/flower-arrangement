#include <string>
#include "../include/Florist.h"


Florist::Florist(std::string name, WholeSaler* wholeSaler, FlowerArranger* flowerArranger, DeliveryPerson* deliveryPerson)
: Person(name), wholeSaler(wholeSaler), deliveryPerson(deliveryPerson), flowerArranger(flowerArranger) {}



void Florist::acceptOrder(Person * person, std::vector<std::string> flowers) {
    std::cout << getName() << " forwards request to " << wholeSaler->getName() << std::endl;
    FlowersBouquet* flowersBouquet = wholeSaler->acceptOrder(flowers);
    std::cout << wholeSaler->getName() << " returns flowers to " << getName() << std::endl;
    std::cout << getName() << " request flowers arrangement from " << flowerArranger->getName() << std::endl;
    flowerArranger->arrangeFlowers(flowersBouquet);
    std::cout << flowerArranger->getName() << deliveryPerson->getName() << std::endl;
    std::cout << getName() << " forwards flowers to " << deliveryPerson->getName() << std::endl;
    deliveryPerson->deliver(person, flowersBouquet);
}

std::string Florist::getName() {
    return "Florist " + Person::getName();
}
