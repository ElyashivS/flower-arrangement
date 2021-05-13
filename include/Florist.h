#ifndef HW2_FLORIST_H
#define HW2_FLORIST_H


#include "WholeSaler.h"
#include "FlowerArrenger.h"
#include "DeliveryPerson.h"
#include "Person.h"

class Florist : public Person {

public:

    Florist(std::string name, WholeSaler *, FlowerArrenger *, DeliveryPerson *);
    void acceptOrder(Person*, std::vector<std::string>);

    std::string getName();

    WholeSaler *wholeSaler;
    FlowerArrenger *flowerArrenger;
    DeliveryPerson *deliveryPerson;
};
#endif //HW2_FLORIST_H


