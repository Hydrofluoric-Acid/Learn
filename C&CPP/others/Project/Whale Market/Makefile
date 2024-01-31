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
# CXX = g++
# TARGET = Market
# SRC = $(wildcard *.cpp)#所有满足后缀cpp文件
# OBJ = $(patsubst %.cpp, %.o, $(SRC))#将SRC结果cpp替换成o

# CXXFLAGS = -c -Wall
# $(TARGET): $(OBJ)
# 	$(CXX) -o $@ $^
# # $@ $^
#  %.o: %.cpp
# 	$(CXX) $(CXXFLAGS) $< -o $@
# .PHONY: clean
# clean:
# 	del /Q *.o $(TARGET)
# .PHONY: clean # 伪目标

# # 自定义环境变量
#  CC = g++ # 指定编译器

# CFLAGS = -I include # 指定头文件目录
# CFILES = $(shell find src -name "*.cpp") # 搜索所有的源文件
# OBJS = $(CFILES:.cpp=.o) # 所有的目标文件
# TARGET = main # 最终生成目标
# DATA = data/*.dat # 搜索所有的数据文件

# RM = -rm -f # 删除方式

# all: $(TARGET)
# 	git commit -a -m "> make"

# # 项目构建方式
# $(TARGET): $(OBJS)
# 	$(CC) -o $(TARGET) $(OBJS)

# %o : %c
# 	$(CC) -c $(CFLAGS) $< -o $@

# clean:
# 	$(RM) $(TARGET) $(OBJS) $(DATA)
# 	git commit -a -m "> make clean"








CXX = g++
TARGET = main
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