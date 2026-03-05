#include <iostream>
#include <string>
#include "Car.h"
using namespace std;


int main() {

	Car c;
	c.setmaker("honda");
	c.setmodel(2019);
	c.setcolor("Black");
	
	cout << "This car made by :" << c.getmaker() << endl;
	cout << "The model is:" << c.getmodel() << endl;
	cout << "The color is :" << c.getcolor()  << endl;







	return 0;
}