#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

struct Car
 {
     char brand[50];
     char model[50];
     int year;
};

struct vehicle {
struct Car cars[10];
};

int main(int argc, char const *argv[])
{
	populate_vehicle();
	print_vehicle();
	return 0;
}
