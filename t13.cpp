#include <iostream> 
#include <cmath>
using namespace std;
int main() {
	double a, b, x;
	cin >> a >> b >> x;
	double y = pow((x * x + b), 0.2) - (b * b * pow(sin(x + a), 3)) / x;
	cout << y << endl;
	return 0;
}