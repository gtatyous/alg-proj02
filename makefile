EXE = BST
SOURCES = main.cpp bst.cpp bst.h
OBJECTS := $(SOURCES:%.cpp=%.o)
CXXFLAGS = -Wall -std=c++11
CXX = g++

$(EXE) : $(OBJECTS)
	$(CXX) $^ -o $@

clean:
	$(RM) $(EXE) $(OBJECTS)



