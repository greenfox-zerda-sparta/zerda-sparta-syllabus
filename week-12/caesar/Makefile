objects := $(patsubst %.c,%.o,$(wildcard *.cpp))

all: $(objects)
	g++ -o caesar $(objects) -std=gnu++11

test: $(objects)
	g++ -o caesar_test $(objects) -std=gnu++11 -D TEST
