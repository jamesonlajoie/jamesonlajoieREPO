CONSERVATIVE_FLAGS = -std=c+11 -Wall -Wextra -pedantic
DEBUGGING_FLAGS = -g -O0
CFLAGS = $(CONSERVATIVE_FLAGS) $(DEBUGGING_FLAGS)

digraph_analyzer: digraph_analyzer.o
	g++ -o digraph_analyzer digraph_analyzer.o

digraph_analyzer.o: digraph_analyzer.cpp
	g++ -o digraph_analyzer.cpp $(CFLAGS)

.PHONY: clean
clean:
	rm -f *.o digraph_analyzer.cpp
