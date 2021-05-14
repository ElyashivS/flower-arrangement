#ifndef HW2_FLOWERARRANGER_H
#define HW2_FLOWERARRANGER_H


#include <string>
#include <vector>
#include "FlowersBouquet.h"
#include "Person.h"

class FlowerArranger : public Person{
public:
    FlowerArranger(std::string name, std::vector<std::string>);
    std::string getName();
    void arrangeFlowers(FlowersBouquet*);

};


#endif //HW2_FLOWERARRANGER_H
