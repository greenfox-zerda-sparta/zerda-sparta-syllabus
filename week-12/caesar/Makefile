objects := $(patsubst %.c,%.o,$(wildcard *.cpp))

all: $(objects)
	g++ -o caesar $(objects) -std=gnu++11
