#ifndef HW2_WHOLESALER_H
#define HW2_WHOLESALER_H


#include <iostream>
#include <vector>
#include "FlowersBouquet.h"

class WholeSaler {
private:
    WholeSaler(std::string name);
    WholeSaler* wholeSaler;
    std::string name;
public:
    FlowersBouquet* acceptOrder(std::vector<std::string>);
};

#endif //HW2_WHOLESALER_H
