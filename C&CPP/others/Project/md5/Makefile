#CXX = g++
#TARGET = main
#OBJ = main.o md5.o
#$(TARGET): $(OBJ)
#	$(CXX) -o $(TARGET) $(OBJ)
#	
#main.o: main.cpp
#	$(CXX) -c main.cpp
#md5.o: md5.cpp
#	$(CXX) -c md5.cpp
# CXX = g++
# TARGET = main
# OBJ = main.o md5.o
# CXXFLAGS = -c -wall
# $(TARGET): $(OBJ)
# 	$(CXX) -o $@ $^
# # $@ $^
#  %.o: %.cpp
#  	$(CXX) $(CXXFLAGS) $< -o $@
# .PHONY: clean
# clean:
# 	rm -f *.o $(TARGET)
CXX = g++
TARGET = hello
SRC = $(wildcard *.cpp)#所有满足后缀cpp文件
OBJ = $(patsubst %.cpp, %.o, $(SRC))#将SRC结果cpp替换成o

CXXFLAGS = -c -Wall
$(TARGET): $(OBJ)
	$(CXX) -o $@ $^
# $@ $^
 %.o: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@
.PHONY: clean
clean:
	del /Q *.o $(TARGET)