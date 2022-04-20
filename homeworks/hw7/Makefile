CONSERVATIVE_FLAGS = -std=c++11 -Wall -Wextra -pedantic
DEBUGGING_FLAGS = -g -O0
CFLAGS = $(CONSERVATIVE_FLAGS) $(DEBUGGING_FLAGS)

DataLoopTest: DataLoop.o DataLoopTest.o
	g++ -o DataLoopTest DataLoopTest.o DataLoop.o

DataLoopTest.o: DataLoopTest.cpp DataLoop.h
	g++ -c DataLoopTest.cpp $(CFLAGS)

DataLoop.o: DataLoop.cpp DataLoop.h
	g++ -c DataLoop.cpp $(CFLAGS)

.PHONY: clean
clean:
	rm -f *.o main?