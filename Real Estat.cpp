#include <iostream>
#include<string>
#include <windows.h>
#include<iomanip>
using namespace std;

class Employee {
private:
    string name;
    string department;
    string position;
    string address;
    int id;
    float salary;
    float bonus;

public:
    Employee(string n, string d, string p, string a, int i, float s, float b)
    {
        name = n;
        department = d;
        position = p;
        address = a;
        id = i;
        salary = s;
        bonus = b;
    }

    void setEmployee(string n, string d, string p, string a, int i, float s, float b)
    {
        name = n;
        department = d;
        position = p;
        address = a;
        id = i;
        salary = s;
        bonus = b;
    }


    void setColor(int color) {
        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(h, color);
    }
    //void s1() {

    //}

    void display()
    {
        setColor(12);
        cout << "Employee Information:- " << endl;
        setColor(3);
        cout << "Name: " << name << endl;
        cout << "Department:" << department << endl;
        cout << "Position:" << position << endl;
        cout << "Address:" << address << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: $" << salary << endl;
        cout << "Bonus:" << bonus << endl;
        setColor(15);
        cout << "------------------------------------" << endl;
    }
};//بيانات الموظف

class Soldproperty
{
private:
    string type;
    string date;
    double price;
    string soldby;

public:
    Soldproperty(string ty, string da, double pr, string sb)
    {
        type = ty;
        date = da;
        price = pr;
        soldby = sb;
    }
    string get_type()
    {
        return type;
    }
    string get_date()
    {
        return date;
    }
    double get_Price()
    {
        return price;
    }
    string get_soldby()
    {
        return soldby;
    }
    void setColor(int color) {
        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(h, color);
    }

    void display()
    {
        setColor(11);
        cout << "Type: " << type << endl;
        cout << "Date: " << date << endl;
        cout << "Price: " << fixed << setprecision(2) << price << endl;
        cout << "sold by: " << soldby << endl;
        setColor(15);
        cout << "------------------------------------" << endl;

    }
};//اسم اللي باع الملكيه و بيانات الملكيه

//-------------------------------------

class Available {
protected:
    string address;
    double price;
    double area;

public:
    friend int operator+(Available a1, Available a2) {
        int total = a1.price + a2.price;
        return total;
    }
    Available(string add, double pr, double ar) {
        if (pr <= 0)
            throw 1;
        address = add;
        price = pr;
        area = ar;
    }

    Available()
    {
        address = "Unkown";
        price = 0;
        area = 0;
    }

    void setColor(int color) {
        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(h, color);
    }
    void display()
    {

        setColor(3);
        cout << "Address: " << address << endl;
        cout << "Area: " << area << "m" << endl;
        cout << "Price: " << (price / 1000000) << "M" << " " << "EGP" << endl;
    }
    string get_address()
    {
        return address;
    }
    double get_totalArea()
    {
        return area;
    }
    double get_totalPrice() {
        return price;
    }
};//بيشيل البيانات المشتركه اللي موجوده في كلاسات الملكيه

class Apartment : public Available {
private:
    string address;
    double area;
    string floor;
    double totalprice;

public:
    Apartment()
    {
        area = 0;
        floor = " ";
        address = " ";
        totalprice = 0.0;
    }
    Apartment(string addr, double tp, double a, string f) : Available(addr, tp, a)
    {
        floor = f;
    }

    string getFloor()
    {
        return floor;
    }
    void setColor(int color) {
        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(h, color);
    }

    void display()
    {
        Available::display();
        cout << "Floor : " << floor << endl;

        setColor(15);
        cout << "________________________________________\n";
    }
};

class Villa : public Available
{
private:
    string address;
    int floors;
    int area;
    int rooms;
    bool hasGarden;
    bool hasGarage;
    double price;

public:
    Villa(string ad, int f, int ar, int r, bool gard, bool grg, double prc) : Available(ad, prc, ar)
    {
        floors = f;
        rooms = r;
        hasGarden = gard;
        hasGarage = grg;
    }

    int get_floors()
    {
        return floors;
    }

    int get_rooms()
    {
        return rooms;
    }

    bool get_hasGarden()
    {
        return hasGarden;
    }

    bool get_hasGarage()
    {
        return hasGarage;
    }


    void setColor(int color) {
        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(h, color);
    }
    void display()
    {
        Available::display(); // Scopes to available display
        setColor(3);
        cout << "Number of floors: " << floors << endl;
        cout << "Number of rooms: " << rooms << endl;
        cout << "Has garden: " << ((hasGarden) ? "Yes" : "No") << endl;//Ternary operator
        cout << "Has garage: " << ((hasGarage) ? "Yes" : "No") << endl;
        setColor(15);
        cout << "------------------------------------" << endl;
    }
};

class Land : public Available
{
private:
    string address;
    double totalArea;
    string landType;
    bool hasWaterAndElectricity;
    double totalPrice;

public:
    Land()
    {
        address = "Unknown";
        totalArea = 0;
        landType = "Not Specified";
        hasWaterAndElectricity = false;
        totalPrice = 0;
    }
    Land(string add, double area, string type, bool status, double tp) : Available(add, tp, area)
    {
        landType = type;
        hasWaterAndElectricity = status;
    }

    string get_landType()
    {
        return landType;
    }
    bool get_hasWaterAndElectricity()
    {
        return hasWaterAndElectricity;
    }

    void setColor(int color) {
        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(h, color);
    }
    void display()
    {
        Available::display();
        cout << "Land Type: " << landType << endl;
        cout << "Infrastructure Status: " << ((hasWaterAndElectricity) ? "Available" : "Not Available") << endl;
        setColor(15);
        cout << "-------------------------------" << endl;
    }

};
void setColor(int color)
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, color);
}

int main()
{
    try {
        Apartment A1[2] = {
            Apartment("6 OfOctober-FirstDistrict", 11000000, 250, "fourth"),
            Apartment("HadayekElahram-Aldiyaralasrea", 12000000, 150, "second")
        };
        Villa V1[2] = {
            Villa("Beverly Hills - Sheikh Zayed", 2, 205, 5, true, false, 10000000),
            Villa("Marassi - North Coast", 3, 400, 7, true, true, 25000000)
        };

        Land L1[2] = {
            Land("Cairo - Nasr City", 200, "Residential", true, 25000000),
            Land("New Cairo - Fifth Settlement", 350, "Commercial", true, 40000000)
        };

        Soldproperty SP1("Villa", "12/12/2025", 50000000, "Adel");
        Employee E1("Ahmed", "HR", "Manager", "Cairo", 001, 5000, 500);
        Employee E2("Adel", "sales", "Manager", "Giza", 007, 6000, 1000);
        while (true) {
            setColor(3);
            setColor(3);
            cout << "________________________________" << endl;

            setColor(3);
            cout << "|";

            setColor(14);
            cout << "     REAL ESTATE SYSTEM       ";

            setColor(3);
            cout << "|" << endl;

            setColor(3);
            cout << "|                              |" << endl;


            setColor(3);
            cout << "|";

            setColor(10);
            cout << "   [1] Employees Info         ";

            setColor(3);
            cout << "|" << endl;


            setColor(3);
            cout << "|";

            setColor(11);
            cout << "   [2] Sold Property          ";

            setColor(3);
            cout << "|" << endl;


            setColor(3);
            cout << "|";

            setColor(13);
            cout << "   [3] Available Property     ";

            setColor(3);
            cout << "|" << endl;


            setColor(3);
            cout << "|";

            setColor(12);
            cout << "   [4] Exit                   ";

            setColor(3);
            cout << "|" << endl;


            setColor(3);
            cout << "|                              |" << endl;


            setColor(3);
            cout << "|______________________________|" << endl;


            setColor(3);
            cout << "|";

            setColor(15);
            cout << "   Enter the num of menu :    ";

            setColor(3);
            cout << "|" << endl;


            setColor(3);
            cout << "|______________________________|" << endl;

            setColor(15);
            int x;
            cin >> x;
            if (x == 1) {
                E1.display();
                E2.display();
            }
            else if (x == 2) {
                setColor(12);
                cout << "Sold Property:- " << endl;
                SP1.display();
            }
            else if (x == 3) {

                while (true) {
                    setColor(3);
                    cout << "________________________________" << endl;

                    setColor(14);
                    cout << "|     REAL ESTATE SYSTEM       |" << endl;

                    setColor(3);
                    cout << "|                              |" << endl;

                    setColor(10);
                    cout << "|   [1] Villas                 |" << endl;

                    setColor(11);
                    cout << "|   [2] Apartments             |" << endl;

                    setColor(13);
                    cout << "|   [3] Lands                  |" << endl;

                    setColor(12);
                    cout << "|   [4] Back                   |" << endl;

                    setColor(3);
                    cout << "|______________________________|" << endl;

                    setColor(15);
                    int q; cin >> q;
                    if (q == 1)
                    {
                        int total = 0;
                        V1[0].display();
                        V1[1].display();
                        total = V1[0] + V1[1];
                        cout << "Total price for Villas: " << (total / 1000000) << "M EGP" << endl;
                        cout << "------------------------------------" << endl;
                    }
                    else if (q == 2)
                    {
                        int total = 0;
                        A1[0].display();
                        A1[1].display();
                        total = A1[0] + A1[1];
                        cout << "Total price for Apartments: " << (total / 1000000) << "M EGP" << endl;
                        cout << "------------------------------------" << endl;
                    }
                    else if (q == 3)
                    {
                        int total = 0;
                        L1[0].display();
                        L1[1].display();
                        total = L1[0] + L1[1];
                        cout << "Total price for Lands: " << (total / 1000000) << "M EGP" << endl;
                        cout << "------------------------------------" << endl;
                    }
                    else if (q == 4) {
                        break;
                    }
                }
            }
            else if (x == 4) {
                break;
            }
        }

    }
    catch (int x) {
        setColor(12);
        cout << ">>>>>>>>>>>> Price Error <<<<<<<<<<<<";
    }

    return 0;
}