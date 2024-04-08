#include <stdio.h>
#include "functions.h"

int main() {
    struct Cars car[10];

    populateCar(car);
    printCar(car);

    return 0;
}
