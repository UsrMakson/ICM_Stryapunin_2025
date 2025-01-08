
#include "Header.h"
#include <iostream>
#include <algorithm>
#include <clocale>
#include <Windows.h>
#include <locale>
#include <sstream>
#include <vector>

using namespace std;

int main() {
	setlocale(0, "");
	int n, res = 1; 
	cout << " : Введите N -> ";
	cin >> n;
	corrrect_cin(n);
	alg(n, res);
	res--;

	cout << endl <<" : Ответ: Число 2^" << n << "-1 --> " << res << endl;
	system("pause");
	return 0;
}  
