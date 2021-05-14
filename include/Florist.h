#ifndef HW2_FLORIST_H
#define HW2_FLORIST_H


#include "WholeSaler.h"
#include "FlowerArranger.h"
#include "DeliveryPerson.h"
#include "Person.h"

class Florist : public Person {

public:

    Florist(std::string name, WholeSaler *, FlowerArranger *, DeliveryPerson *);
    void acceptOrder(Person*, std::vector<std::string>);

    std::string getName();

    WholeSaler *wholeSaler;
    FlowerArranger *flowerArranger;
    DeliveryPerson *deliveryPerson;
};
#endif //HW2_FLORIST_H


