
#include "Header.h"
#include <iostream>>
#include <vector>

using namespace std;

void corrrect_cin(int& n) {
    if ((n < 40) or (n > 2147483646)) {
        do { cout << " : повторно введите N --> "; cin >> n; } while ((n < 40) or (n > 2147483647));
    }
}
