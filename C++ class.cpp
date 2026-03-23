#include <iostream>
#include<string>
using namespace std;
/*
Create a class named Time with :
hours
minutes
Implement a constructor to set hours and minutes.
Add a display() function to print time in the format : hh:mm.
Overload the + operator to add two Time objects.
Example : 1 : 50 + 2 : 20 = 4 : 10
Overload the - operator to subtract two Time objects.
Example : 3 : 30 - 1 : 45 = 1 : 45
Test your program by creating two Time objects and performing addition and subtraction. */
class Time {
private :
	int hours;
	int minutes;
public:
	Time(int h = 0, int m = 0) {
		hours = h;
		minutes = m;
	}
	Time operator +(Time t) {
		Time temp;
		temp.hours = hours + t.hours;
		temp.minutes = minutes + t.minutes;
		return temp;
	}
	void display() {
		cout << "hours:" << hours << endl;
		cout << "minutes:" << minutes << endl;

	}
};
int main() {
	Time c1(5, 55);
	Time c2(3, 4);
	Time c3;
	c3 = c1 + c2;
	c3.display();

	return 0;
}