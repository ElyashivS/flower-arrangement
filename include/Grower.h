#ifndef HW2_GROWER_H
#define HW2_GROWER_H

#include <iostream>
#include <vector>
#include "Gardener.h"
#include "FlowersBouquet.h"

class Grower : public Person{
private:
    Gardener* gardener;
public:
    Grower(std::string name, Gardener*);
    FlowersBouquet* prepareOrder(std::vector<std::string>);
    std::string getName();

};

#endif //HW2_GROWER_H
