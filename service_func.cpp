
#include "Header.h"
#include <iostream>
#include <limits>

using namespace std;

void correct_cin(int& n) {
    cout << " : ¬ведите N -> ";
    cin >> n;

    if (n < 40 || n >= 2147483646 || cin.fail()) {
        do { 
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << " : повторно введите N --> "; cin >> n; 
        } while ((n < 40) or (n >= 2147483647));
    }
}
