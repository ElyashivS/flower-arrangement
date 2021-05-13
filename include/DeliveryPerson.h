#ifndef HW2_DELIVERYPERSON_H
#define HW2_DELIVERYPERSON_H


#include "Person.h"

class DeliveryPerson : public Person {
public:
    DeliveryPerson(const std::string &name, Person*);

    void deliver(Person*, FlowersBouquet*);
};


#endif //HW2_DELIVERYPERSON_H
