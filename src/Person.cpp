#include <string>
#include "../include/Person.h"
#include "../include/Florist.h"

Person::Person(const std::string &name) : name(name) {}

void orderFlowers(Florist* florist, Person* person, std::vector<std::string> flowers) {}

void Person::acceptFlowers(FlowersBouquet* flowersBouquet) {
    std::cout << getName() << " accepts the " << flowersBouquet->getName() << std::endl;
}

std::string Person::getName() {
    return name;
}

void Person::orderFlower(Florist *florist, Person *person, std::vector<std::string> flowers) {
    std::cout << getName() << " orders flowers to " << person->getName() << " from " << florist->getName() << stringFlowers(flowers) << std::endl;
    florist->acceptOrder(person, flowers);
}

std::string Person::stringFlowers(std::vector<std::string> flowers) {
    std::string s = "";
    s += ": ";

    for (int i = 0; i < flowers.size(); i++) {
        s += flowers[i];
        if (i != flowers.size() - 1) {
            s += ", ";
        }
    }
    return s;
}

