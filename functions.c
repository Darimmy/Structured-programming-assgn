#include <stdio.h>
#include "functions.h"

void populateCar(struct Cars car[10]) {
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the Brand of vehicle %d: ", i+1);
        scanf("%s", car[i].brand);

        printf("Enter the model of vehicle %d: ", i+1);
        scanf("%s", car[i].model);
        
        printf("Enter the year of production of vehicle %d: ", i+1);
        scanf("%d", car[i].year);
    }
}

void printCar(struct Cars car[10]) {
    printf("\nAvailable cars include:\n");
    for (int i = 0; i < 10; i++) {
        printf("Cars %d: %s by %s %d\n", i+1, car[i].model, car[i].brand, car[i].year);
    }
}
