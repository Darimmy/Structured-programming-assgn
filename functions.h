#ifndef FUNCTIONS_H
#define FUNCTIONS_H

struct Cars {
    char brand[50];
    char model[50];
    int year[4];
};

void populateCar(struct Cars[]);
void printCar(struct Cars[]);

#endif
