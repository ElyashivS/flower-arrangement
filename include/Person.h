#ifndef HW2_PERSON_H
#define HW2_PERSON_H

#include <vector>
#include <iostream>
#include "FlowersBouquet.h"

class Florist;
class Person
{
protected:
    std::string name;
public:

    Person(const std::string &name);

    virtual std::string getName();
    void orderFlower(Florist*, Person*, std::vector<std::string>);

    void acceptFlowers(FlowersBouquet*);
    std::string stringFlowers(std::vector<std::string>);
};

#endif //HW2_PERSON_H
