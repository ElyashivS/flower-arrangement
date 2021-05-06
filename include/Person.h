#ifndef HW2_PERSON_H
#define HW2_PERSON_H

#include <vector>
#include "Florist.h"
#include "FlowersBouquet.h"

class Person {
public:
    Person(std::string name);
    std::string name;

    void orderFlower(Florist*, Person*, std::vector<std::string>);
    void acceptFlowers(FlowersBouquet*);
};

#endif //HW2_PERSON_H
