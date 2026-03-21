#include <iostream>
using namespace std;

class Account {
private:
    float balance;
public:
    void setbalance(float b) {
        balance = b;
    }

    float getbalance() {
        return balance;
    }

 
    friend void withdraw(Account a, float amount);
};
void  withdraw(Account a, float amount) {
 
    if (a.balance >= amount) {
        a.balance -= amount;
        cout << "Withdrawal successful" << endl;
        cout <<"The balance now : " << a.balance << endl;
    }
    else {
        cout<< "Insufficient balance" << endl;
    }
}

int main() {
    Account a;
  
    a.setbalance(100); 
    withdraw(a, 30);
    withdraw(a, 80);

    return 0;
}
