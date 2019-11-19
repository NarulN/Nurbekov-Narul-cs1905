#include <iostream> 
#include <cmath>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b > b + c)cout << a << b << a + b;
	else if (a + b > a + c)cout << a << b << a + b;
	else if (b + c > a + b)cout << b << c << b + c;
	else if (b + c > a + c)cout << b << c << b + c;
	return 0;
}