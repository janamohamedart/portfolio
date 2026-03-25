#include <iostream>
using namespace std;
#include <string>

/*Stores n student marks in a dynamic array.
Has a function input() to read the marks from the user.
Has a function countPass() that counts how many students passed
(mark ≥ 50).
Has a function maxMark() to find the highest mark.
Use a constructor to create the dynamic array.
Use a destructor to delete it.
In main():
Read number of students n
Create object
Input marks
Print:
number of students who passed
highest mark*/
class Markes {
private :
	int* arr;
	int size;
	 

public:
	Markes(int m) {
		size = m;
		arr = new int[size];
	}
	 
	 
	void input() {
		for (int i = 0; i < size; i++) {
			cin >> arr[i];
		}
	}
	//Has a function countPass() that counts how many students passed
	//(mark ≥ 50).
	int countpass() {
		int count = 0;
		for (int i = 0; i < size; i++) {
			if (arr[i] >= 50) {
				count++;
			}
		
		}
		
		return count;
	}
	//Has a function maxMark() to find the highest mark.
	int maxmark() {
		int max = arr[0];
		for (int i = 1; i < size; i++) {
			if (arr[i] > max) {
				max = arr[i];
			}
		}
		return max;
	 }
	~Markes() {
		delete[] arr;
	}

	/*Use a constructor to create the dynamic array.
Use a destructor to delete it.*/


};



int main() {
	/*
Read number of students n
Create object
Input marks
Print:
number of students who passed
highest mark*/
	int m;
	cin >> m;
	Markes mark (m);
	mark.input();
	cout << "Number of students who pass: " << mark.countpass() << endl;
	cout << "Max mark: " << mark.maxmark() << endl;
	return 0;
}