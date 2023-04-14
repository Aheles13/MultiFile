#include "Functions.h"
#include <iostream>


extern const double _Pi = 3.14;

double sum(double num1, double num2) {
	return num1 + num2;
}

void hi(){
		 std::cout << "Hello world!\n";
	 }

void show_pi() {
	std::cout << "Число Pi = " << _Pi << std::endl;

};
