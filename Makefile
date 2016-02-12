CXX ?= g++
main: main.cpp
    $(CXX) -std=c++11 -o main main.cpp
test: main
    ./main
