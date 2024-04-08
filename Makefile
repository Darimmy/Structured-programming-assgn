car_deals: functions.o main.o
	gcc -o car_deals functions.o main.o
main.o: main.c
	gcc -c main.c
functions.o:functions.c
	gcc -c functions.c
clean:
	rm car_deals*.o
