#ifndef HW2_GARDENER_H
#define HW2_GARDENER_H


#include "FlowersBouquet.h"
#include <iostream>
#include <vector>

class Gardener {
private:
    Gardener(std::string name);

public:
    std::string name;
    FlowersBouquet* prepareBouquet(std::vector<std::string>);

};


#endif //HW2_GARDENER_H
