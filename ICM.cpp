
#include "Header.h"
#include <conio.h>
#include <fstream>
#include <iostream>
#include <locale>
#include <sstream>

using namespace std;

int main() {
	setlocale(0, "");
	int n, res;
	ofstream f;
	cout << " : Введите N -> ";
	cin >> n;
	corrrect_cin(n);
	alg(n, f);

	system("pause");
	return 0;
}  
