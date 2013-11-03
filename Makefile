
TARGET = TestRunner

CCPP = g++

INCLUDE_DIR = include
SRC_DIR = tests

CFLAGS = -g -Wall -I $(INCLUDE_DIR)
LFLAGS = -lpthread -lgtest

OBJECTS = $(patsubst %.cpp, %.o, $(wildcard $(SRC_DIR)/*.cpp))
HEADERS = $(wildcard *.h)


all: clean $(TARGET)
	./$(TARGET)

$(TARGET): $(OBJECTS)
	$(CCPP) $(OBJECTS) $(LFLAGS) -o $@

%.o: %.cpp $(HEADERS)
	$(CCPP) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGET)
