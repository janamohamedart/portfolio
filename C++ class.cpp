#include <iostream>
using namespace std;
#include <string>
//Write a C++ program to create a class called Car that has private member variables for:
/*
brand
model
year*/

class Car 
{
private :
	string brand;
	string model;
	int year;

public :
	void setbrand (string b) {
		brand = b;
	}
	string getbrand() {
		return brand;
	}
	void setmodel(string m) {
		model = m;
	}
	string getmodel() {
		return model;
	}
	void setyear(int y) {
		year = y;
	}
	int getyear() {
		return year;
	}
};
 int main (){
	 Car c1;
	 c1.setbrand("octavia");
	 c1.setmodel("NPA");
	 c1.setyear(2016);
	 cout << "brand :" << c1.getbrand() << endl;
	 cout << "model :" << c1.getmodel() << endl;
	 cout << "year :" << c1.getyear() << endl;



	return 0;
}