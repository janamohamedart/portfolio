#include <iostream>
#include <string>
using namespace std;
struct employee {
    string name;
    int id;
    double salary;
};
employee emp1 [4];

int main() {
    employee emp1[4];
    emp1[0]= { "Ahmed",56789,7000};
	emp1[1] = { "Hassan",56790,8000 };
	emp1[2] = { "Ali",56791,9000 };
	emp1[3] = { "Omar",56792,8000 };

    for (int i = 0; i < 4; i++) {
        cout << "Name:" << emp1[i].name << endl;
        cout << "ID:" << emp1[i].id << endl;
        cout << "Salary:" << emp1[i].salary << endl;
        cout << "_________________________" << endl;
        }
    return 0;
}