#include <stdio.h>
#include "functions.h"

void populateCar(struct Cars car[10]) {
    for (int i = 0; i < 10; i++) {
        printf("Enter the Brand of the vehicle %d: ", i+1);
        scanf("%s", car[i].brand);

        printf("Enter the model of the vehicle %d: ", i+1);
        scanf("%s", car[i].model);
    }
}

void printCar(struct Cars car[10]) {
    printf("\nAvailable cars include:\n");
    for (int i = 0; i < 10; i++) {
        printf("Cars %d: %s by %s\n", i+1, car[i].brand, car[i].model);
    }
}
