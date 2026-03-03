# include <iostream>
#include <string>
using namespace std;
struct subject {
    string subject;
    float grade;
    int NumOfHours;
};
subject sub[3];

int main() {
    subject sub[3];

    sub[0] = { "Physics",93,3 };
    sub[1] = { "Math",86,3 };
    sub[2] = { "English",98,2 };

    for (int i = 0; i < 3; i++) {
        cout << "Name:" << sub[i].subject << endl;
        cout << "Grade:" << sub[i].grade << endl;
        cout << "Numbers of hours:" << sub[i].NumOfHours << endl;
		cout << "-----------------------------" << endl;

    }
    float max = sub[0].grade;
    string high = sub[0].subject;
    for (int i = 1; i < 3; i++) {
        if (sub[i].grade > max) {
            max = sub[i].grade;
            high = sub[i].subject;
        } 
    }
    cout << "Highest subject is :"<<" " << high << endl;
    cout << "Degree :" <<" "<< max << endl;

    float sum = (sub[0].grade + sub[1].grade + sub[2].grade);
    float average = sum / 3;

    if (average >= 50) {
        cout << "Pass" << endl;
    }
    else {
        cout << "fail" << endl;
    }







    return 0;
}