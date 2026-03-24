#include <iostream>
using namespace std;

private:
	int* arr;
	int size;
public:
	Numbers(int n) {
		size = n;
		arr = new int[size];
	}
	void input() {
		for (int i = 0; i < size; i++) {
		
			cin >> arr[i];
		}
	}
	int maxvalue() {
		int max = arr[0];
		for (int i = 1; i < size; i++) {
			if (arr[i] > max) {
				max = arr[i];

			}
		}
		return max;
	}
	int sum(){
		int temp=0;
		for (int i = 0; i < size; i++) {
			temp += arr[i];
			
		}
		return temp;
	}
	~Numbers() {
		delete[] arr;
	}
};
int main() {
	int n;
	cin >> n; 
	Numbers num(n);
	num.input();
	cout <<"max number is:" << num.maxvalue() << endl;
	cout << "the sum of the numbers are:" << num.sum() << endl;

	return 0;
}