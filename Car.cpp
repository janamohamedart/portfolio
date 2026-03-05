#include "Car.h"



void Car::setmaker(string m)
{	
	maker = m;
}
 
string Car::getmaker() {
	return maker;
}

void Car::setmodel(int mo) {
	model = mo;
}
int Car::getmodel() {
	return model;
}
void Car::setcolor(string co) {
	color = co;
}

string Car::getcolor() {
	return color;
}