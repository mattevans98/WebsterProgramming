#include "Car.h"

int main()
{
    Car myCar;

    // myCar.setValues(1000, 10000.0, "Toyota");
    myCar.display();

    Car friendsCar(200000, 3.0, "Nissan");
    friendsCar.display();

    Car sistersCar(1000);
    sistersCar.display();

    Car neighborsCar(20000, 2500.0);
    neighborsCar.display();

    Car brothersCar(0, 0.0, "Toyota");

    Car cars[5] = {
            Car(1000, 10.5, "Random"),
            Car(1000),
            (10000, 100.0)
    };

    Car *ptr;
    ptr = new Car;
    ptr->display();

    delete ptr;

    ptr = new Car[5];

    delete[] ptr;

    return 0;
}