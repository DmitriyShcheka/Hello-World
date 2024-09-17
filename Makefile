CC = g++
CFLAGS = -Wall
TARGET = hello

all: $(TARGET)

$(TARGET): hello.o
	$(CC) $(CFLAGS) -o $(TARGET) hello.o

hello.o: hello.cpp hello.h
	$(CC) $(CFLAGS) -c hello.cpp

clean:
	rm -f *.o $(TARGET)
