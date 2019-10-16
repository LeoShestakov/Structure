all: main.o functions.o
	gcc -o humanStruct main.c functions.c

functionTesting.o: main.c functions.h
	gcc -c main.c

functions.o: functions.c functions.h
	gcc -c functions.c

run:
	./humanStruct

clean:
	rm *.o
