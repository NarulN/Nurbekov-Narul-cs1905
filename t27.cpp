#include <iostream> 
#include <cmath>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int x = a, y = b, z = c;
	a = x + y;
	b = z - x;
	c = x + y + z;
	cout << a << " " << b << " " << c;
	return 0;
}