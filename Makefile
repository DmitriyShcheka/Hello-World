CC = g++
CFLAGS = -Wall
TARGET = hello
SRC = hello.cpp

all: $(TARGET) run

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)
