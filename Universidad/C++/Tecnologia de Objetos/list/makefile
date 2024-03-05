a.exe: List.o main.o
	g++ -o a.exe List.o main.o
List.o: List.cpp List.h
	g++ -c List.cpp
main.o: main.cpp List.h
	g++ -c main.cpp