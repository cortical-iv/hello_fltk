CC=g++  
CFLAG = -std=c++14
EXE_NAME = hello_fltk

all: main
	@echo "Done."


main: Graph.o Window.o GUI.o Simple_window.o main.o
	$(CC) $(CFLAG) -L/usr/local/lib Graph.o Window.o GUI.o Simple_window.o main.o `fltk-config --ldflags --use-images` -o $(EXE_NAME)

main.o: main.cpp Simple_window.h GUI.h Window.h fltk.h std_lib_facilities.h Point.h Graph.h
	$(CC) $(CFLAG) -I/usr/local/include -c main.cpp

Graph.o: Graph.cpp Graph.h Point.h fltk.h std_lib_facilities.h 
	$(CC) $(CFLAG) -I/usr/local/include -c Graph.cpp

Window.o: Window.cpp Window.h fltk.h std_lib_facilities.h Point.h Graph.h GUI.h
	$(CC) $(CFLAG) -I/usr/local/include -c Window.cpp

GUI.o: GUI.cpp GUI.h Window.h fltk.h std_lib_facilities.h Point.h Graph.h  
	$(CC) $(CFLAG) -I/usr/local/include -c GUI.cpp

Simple_window.o: Simple_window.cpp Simple_window.h GUI.h Window.h fltk.h std_lib_facilities.h Point.h Graph.h 
	$(CC) $(CFLAG) -I/usr/local/include -c Simple_window.cpp

clean:
	rm $(EXE_NAME) *.o 
