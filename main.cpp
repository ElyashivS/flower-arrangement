#include <iostream>
#include "include/Person.h"
#include "include/Gardener.h"
#include "include/Grower.h"
#include "include/WholeSaler.h"
#include "include/FlowerArrenger.h"
#include "include/DeliveryPerson.h"
#include "include/Florist.h"

int main() {
    Person* chris = new Person("Chris");
    Person* robin = new Person("Robin");
    std::vector<std::string> flowers = {"Roses", "Violets", "Gladiolus"};
    Gardener* gardener = new Gardener("Garret");
    Grower* grower = new Grower("Gary", gardener);
    WholeSaler* wholeSaler = new WholeSaler("Watson", grower);
    FlowerArrenger* flowerArrenger = new FlowerArrenger("Flora", flowers);
    DeliveryPerson* deliveryPerson = new DeliveryPerson("Dylan", robin);
    Florist* fred = new Florist("Fred", wholeSaler, flowerArrenger, deliveryPerson);

    chris->orderFlower(fred, robin, flowers);
}
