#include <iostream>
using namespace std;
#include <string>
//The class should have :
//	private variables : name and age
	//public function to set the values
//	public function to display the values
	//In main() :
	//Create one object from the class.
//	Call the functions.
   
class Student {
private :
	string name;
	int age;

public :
	void setname(string n)
	{
		name = n;
	}
	string getname()
	{
		return name;
	}
	void setage(int a) {
		 age=a;
	 }
	int getage() {
		return age;
	}

};

int main() {
	Student s1;

	s1.setname("Ahmed");
	s1.setage(18);
	cout << "the name is :" << s1.getname() << endl;
	cout << "the age is:" << s1.getage() << endl;




	return 0;
}