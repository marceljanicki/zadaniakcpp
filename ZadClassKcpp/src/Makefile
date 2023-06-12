CXX = g++
CXXFLAGS = -Wall -std=c++11
TARGET = main

all: $(TARGET)

$(TARGET): main.o ZadKcpp.o
	$(CXX) $(CXXFLAGS) -o $(TARGET) main.o ZadKcpp.o

main.o: main.cc include/ZadKcpp.h
	$(CXX) $(CXXFLAGS) -c main.cc

ZadKcpp.o: src/ZadKcpp.cc include/ZadKcpp.h
	$(CXX) $(CXXFLAGS) -c src/ZadKcpp.cc

clean:
	rm -f *.o $(TARGET)
