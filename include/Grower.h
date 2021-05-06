#ifndef HW2_GROWER_H
#define HW2_GROWER_H


#include <iostream>
#include <vector>
#include "Gardener.h"
#include "FlowersBouquet.h"

class Grower {
private:
    Gardener* gardener;
    std::string name;
public:
    FlowersBouquet* prepareOrder(std::vector<std::string>);

};


#endif //HW2_GROWER_H
