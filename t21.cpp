﻿#include <iostream> 
#include <cmath>
using namespace std;
int main() {
	double a, b;
	cin >> a >> b;
	double c = sqrt(a * a + b * b);
	double p = c + a + b, s = (a * b) / 2;
	cout << c << " " << p << " " << s << endl;
	return 0;
}