#ifndef HW2_FLOWERSBOUQUET_H
#define HW2_FLOWERSBOUQUET_H


#include <vector>
#include <iostream>

class FlowersBouquet {
private:
    bool isArrange;
    std::vector<std::string> bouquet;
public:
    FlowersBouquet(std::vector<std::string>);
    void arrange();
    std::string getName();
};


#endif //HW2_FLOWERSBOUQUET_H
