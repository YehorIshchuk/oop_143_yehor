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

    

