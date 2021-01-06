CC            = gcc
CXX           = g++
CFLAGS        = -g -Wall

LINK_TARGET = chess_game
INCPATH =  $$(mysql_config --cflags) $$(mysql_config --libs)

OBJS =  \
	Piece.o \
	main.o 

# %.o: %.cpp
# 	$(CXX) -c $(CFLAGS) -o $@ $<
Piece.o: Piece/Piece.cpp
	$(CXX) -c $(CFLAGS) -o $@ $<
main.o: main.cpp
	$(CXX) -c $(CFLAGS) -o $@ $<

all: $(LINK_TARGET)

# https://stackoverflow.com/questions/60164061/makefile-cflags-ignore-mysql-config-libs
$(LINK_TARGET) : $(OBJS)
	# $(CXX) $(CFLAGS) -o $@ $^
	$(CXX) $(CFLAGS) -o $@ $^ $(INCPATH)


clean: 
	rm -f $(OBJS) $(LINK_TARGET)
	echo Clean all

Piece.o: Piece/Piece.h
main.o: Piece/Piece.h

# Tutorial here
# https://www3.ntu.edu.sg/home/ehchua/programming/cpp/gcc_make.html
