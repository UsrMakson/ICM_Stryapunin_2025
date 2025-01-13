
#include "Header.h"
#include <algorithm>
#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>

using namespace std;

void alg(int& n, ofstream& f) {
    f.open("temp.txt");
    for (int i = 0; i < n; i++)
        f << 1;
    f.close();
}
