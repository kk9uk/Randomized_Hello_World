all: ripple.cpp shuffle.cpp
	g++ -std=c++20 ripple.cpp -o Ripple -Wall -Og -ggdb
	g++ -std=c++20 shuffle.cpp -o Shuffle -Wall -Og -ggdb

ripple: ripple.cpp
	g++ -std=c++20 ripple.cpp -o Ripple -Wall -Og -ggdb

shuffle: shuffle.cpp
	g++ -std=c++20 shuffle.cpp -o Shuffle -Wall -Og -ggdb

clean:
	rm Ripple
	rm Shuffle
