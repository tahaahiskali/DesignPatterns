CC=g++
CFLAGS=-Wall
SOURCES=EagerInitialization.cpp LazyInitialization.cpp main.cpp
EXECUTABLE=singleton

all: $(EXECUTABLE)

$(EXECUTABLE): $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES) -o $@

clean:
	rm -rf $(EXECUTABLE)

