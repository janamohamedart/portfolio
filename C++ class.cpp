#include <iostream>
using namespace std;

class rectangle {
private :
	float length;
	float width;

public :

	void setLenght(float l) {
		if (l >= 0)
		{
			length = l;
		}
		else {
			cout << "lenght must be positive number" << endl;

		}
	}
	float getLenght() {
		return length;
		}

	void setWidth(float w) {
		if (w >= 0) {
			width = w;

		}
		else {
			cout << "width must be positive number" << endl;
		}
	}
		float getWidth() {
		return width;
	
	}
		float getArea() {
			return length * width;
		}

};

int main() {

	rectangle rec;
	rec.setLenght(30.2);
	rec.setWidth(20.5);
	
	cout << "Area is : " << rec.getArea() << endl;




	return 0;
}