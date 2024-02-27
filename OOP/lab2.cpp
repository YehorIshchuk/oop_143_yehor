#include <iostream>
using namespace std;

class Staff {
public:
    int freecars;
    int priceofdelivery;

    Staff(int valuex, bool boolean) {
        priceofdelivery = valuex;
        if (boolean) {
            freecars = 1;
        } else {
            cout << "No cars available" << endl;
        }
    }
~Staff() {
        cout << "Staff object destroyed" << endl;
    }
void Print() {
        cout << "Price of Delivery: " << priceofdelivery << endl;
        cout << "Free Cars: " << freecars << endl;
    }
};
class Customer {
private:
    int numberoforders;
    int profit;
public:
    Customer() {
        numberoforders = 5;
        profit = 1079;
    }
~Customer() {
        cout << "Customer object destroyed" << endl;
    }
void Print() {
        cout << "Number of Orders: " << numberoforders << endl;
        cout << "Profit: " << profit << endl;
    }
};
int main() {
    Staff a(350, true);
    a.Print();

    Customer b;
    b.Print();

    return 0;
}
    



    



    

    

