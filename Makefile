
CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra

SRCS = Vehicul/vehicul.cpp main.cpp
TARGET = VehiculProject

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)
