CXX = g++
CXXFLAGS = -std=c++11 -Wall

SRCS = Proje1.cpp
OBJS = $(SRCS:.cpp=.o)
EXEC = Proje1

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(EXEC)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXEC)
