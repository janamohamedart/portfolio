#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    void setlength(float l) {
        length = l;
    }

    float getlength() {
        return length;
    }

    void setwidth(float w) {
        width = w;
    }

    float getwidth() {
        return width;
    }

    friend void displayArea(Rectangle rec);
};

void displayArea(Rectangle rec) {
    cout << "Area = " << (rec.length * rec.width) << endl;
}

int main() {
    Rectangle rec;
    rec.setlength(6);
    rec.setwidth(3);

    displayArea(rec);

    return 0;
}
