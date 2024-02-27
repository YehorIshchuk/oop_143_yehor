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




    

    

