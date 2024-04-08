#include <stdio.h>
void populate_vehicle(struct vehicle *class) {
    int i;
    for (i = 0; i < 10; i++) {
        printf("Enter vehicle brand %d: ", i + 1);
        scanf("%s", (*class).cars[i].brand);
        printf("Enter vehicle model %d: ", i + 1);
        scanf("%s", (*class).cars[i].model);
        printf("Enter year of production %d: ", i + 1);
        scanf("%d", &(*class).cars[i].year);
    }
}

void print_vehicle(struct vehicle *class) {
    int i;
    for (i = 0; i < 10; i++) {
        printf("\nCar %d:\n", i + 1);
        printf("Brand: %s\n", (*class).cars[i].brand);
        printf("Model: %s\n", (*class).cars[i].model);
        printf("Year: %d\n", (*class).cars[i].year);
    }
}

int main() {
    struct vehicle class;
    populate_vehicle(&class);
    print_vehicle(&class);
    return 0;
}