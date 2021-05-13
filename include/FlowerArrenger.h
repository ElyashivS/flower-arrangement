#ifndef HW2_FLOWERARRENGER_H
#define HW2_FLOWERARRENGER_H


#include <string>
#include <vector>
#include "FlowersBouquet.h"
#include "Person.h"

class FlowerArrenger : public Person{
public:
    FlowerArrenger(std::string name, std::vector<std::string>);
    std::string getName();
    void arrangeFlowers(FlowersBouquet*);

};


#endif //HW2_FLOWERARRENGER_H
