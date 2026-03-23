#include <iostream>
#include <string>
using namespace std;

class Rectangle {
private :
	float length;
	float width;
public:
	Rectangle(float l = 0, float w = 0) {
		length = l;
		width = w;
	}
	Rectangle operator +(Rectangle r) {
		Rectangle temp;
		temp.length = length + r.length;
		temp.width = width + r.width;
		return temp;
	}
	void display() {
		cout << "length :" << length << endl;
		cout << "width:" << width << endl;

	}

};
int main() {
	Rectangle r1(4, 5);
	Rectangle r2(2, 3);
	Rectangle r3;
	r3 = r1 + r2;
	r3.display();


	return 0;
}