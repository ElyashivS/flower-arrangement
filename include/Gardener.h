#ifndef HW2_GARDENER_H
#define HW2_GARDENER_H


#include "FlowersBouquet.h"
#include "Person.h"
#include <iostream>
#include <vector>

class Gardener : public Person{

public:
    Gardener(std::string name);
    FlowersBouquet* prepareBouquet(std::vector<std::string>);
    std::string getName();

    std::vector<std::string> flowers = {"Roses", "Violets", "Gladiolus"};
};


#endif //HW2_GARDENER_H
