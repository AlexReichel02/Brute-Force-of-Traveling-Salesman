main_print: main.o PermutationGenerator.o GraphGenerator.o GeneticTours.o BruteForce.o
	g++ -O3 -Wall -o $@ $^

main.o: main.cpp
	g++ -O3 -Wall -c $^

PermutationGenerator.o: PermutationGenerator.cpp
	g++ -O3 -Wall -c $^

GraphGenerator.o: GraphGenerator.cpp
	g++ -O3 -Wall -c $^

GeneticTours.o: GeneticTours.cpp
	g++ -O3 -Wall -c $^

BruteForce.o: BruteForce.cpp
	g++ -O3 -Wall -c $^

clean:
	rm -f *.o main_print