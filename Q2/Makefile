CXX = g++
CXXFLAGS = -std=c++11 -Wall -c
LXXFLAGS = -std=c++11
OBJECTS = main.o
TARGET = main


$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) $(OBJECTS) -o $(TARGET)
main.o: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp
clean:
	rm -f $(TARGET) $(OBJECTS)
