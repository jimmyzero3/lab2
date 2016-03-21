BMICalc:lab2_main.o Family.o
	g++ -o BMICalc lab2_main.o Family.o

Family.o:Family.cpp Family.h
	g++ -c Family.cpp

lab2_main.o:lab2_main.cpp Family.h
	g++ -c lab2_main.cpp

clean:
	rm BMICalc *.o