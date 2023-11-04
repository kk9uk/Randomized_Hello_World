all: ripple.cpp shuffle.cpp
	g++ -std=c++20 ripple.cpp -o ripple -Wall -Og -ggdb
	g++ -std=c++20 shuffle.cpp -o shuffle -Wall -Og -ggdb

ripple: ripple.cpp
	g++ -std=c++20 ripple.cpp -o ripple -Wall -Og -ggdb

shuffle: shuffle.cpp
	g++ -std=c++20 shuffle.cpp -o shuffle -Wall -Og -ggdb

clean:
	rm ripple
	rm shuffle
