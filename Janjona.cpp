#include <iostream>
#include <string>
using namespace std;
 
class Villa {
private:
	string address;
	int floors;
	int area;
	int rooms;
	bool hasGarden;
	bool hasGarage;
	double price;

public:
	Villa(string ad, int f, int ar,int r, bool gard, bool grg, double prc) {
		address = ad;
		floors = f;
		area = ar;
		rooms = r;
		hasGarden = gard;
		hasGarage = grg;
		price = prc;

	}

	string get_address() {
		return address;
	}

	int get_floors() {
		return floors;
	}

	int get_area() {
		return area;
	}
	int get_rooms() {
		return rooms;
	}

	bool get_hasGarden() {
		return hasGarden;
	}

	bool get_hasGarage() {
		return hasGarage;
	}

	double get_price() {
		return price;
	}


	void display() {
		cout << "Address: " << address << endl;
		cout << "Number of floors: " << floors << endl;
		cout << "Area: " << area <<"m"<< endl;
		cout << "Number of rooms: " << rooms << endl;
		cout << "Has garden:";
			if (hasGarden) {
				cout << "Yes" << endl;
			}
			else {
				cout << "No" << endl;
			}

		
		cout << "Has garage: ";
			if (hasGarage) {
				cout << "Yes" << endl;
			}
			else {
				cout << "No" << endl;
			}
		
		cout << "Price: " << (price / 1000000) << "M"<<" "<< "EGP" << endl;
		cout << "------------------------------------" << endl;

	}

};

int main() {
	/* 
	address, floors, area,rooms, Garden,Garage,price
	*/

	Villa v1[8] = {
		Villa ("Beverly Hills - Sheikh Zaye",2,205,5,true,false,10000000),
		Villa ("Mivida - New Cairo",3,500,6,true,true,16000000),
		Villa ("Palm Hills October",3,250,4,false,true,11000000),
		Villa("Mountain View iCity",4,700,11,true,true,20000000),
		Villa("Marassi - Emaar",4,700,11,true,true,40000000 ),
		Villa("Hadayek October",2,400,5,false,true,13000000),
		Villa("Dream Land - 6 october",3,440,5,true,false,9000000),
		Villa("Palm Hills - Alexandria",4,800,7,true,true,15000000)
	};

	for (int i = 0; i < 8; i++) {
		v1[i].display();
	}

	return 0;
}