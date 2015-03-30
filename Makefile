question:bmi.o main.o
	g++ -o question bmi.o main.o
bmi.o:bmi_h.h bmi.cpp
	g++ -c bmi.cpp
main.o:bmi_h.h main.cpp
	g++ -c main.cpp
