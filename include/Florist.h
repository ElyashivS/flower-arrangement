#ifndef HW2_FLORIST_H
#define HW2_FLORIST_H


#include "WholeSaler.h"
#include "FlowerArrenger.h"
#include "DeliveryPerson.h"
#include "Person.h"

class Florist {
private:
    Florist(std::string name);
    std::string name;
    WholeSaler* wholeSaler;
    FlowerArrenger* flowerArrenger;
    DeliveryPerson* deliveryPerson;
public:

    void acceptOrder(Person*, std::vector<std::string>);

};


#endif //HW2_FLORIST_H
