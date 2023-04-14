CC=g++
CFLAGS=-Wall
SOURCES=$(wildcard *.cpp)
EXECUTABLE=abstract_factory

all: $(EXECUTABLE)

$(EXECUTABLE): $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES) -o $@

clean:
	rm -rf $(EXECUTABLE)

