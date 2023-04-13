CC=g++
CFLAGS=-Wall
SOURCES=$(wildcard *.cpp)
EXECUTABLE=factory_method

all: $(EXECUTABLE)

$(EXECUTABLE): $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES) -o $@

clean:
	rm -rf $(EXECUTABLE)

