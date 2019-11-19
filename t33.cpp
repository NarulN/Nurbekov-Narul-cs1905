#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int x, y;
	cin >> x >> y;
	double k;
	if (x % 2 == 0 || x % 3 == 0 && y % 2 == 0 || y & 3 == 0) {
		k = sqrt(x - sqrt(y));
		cout << k << endl;
	}
	
	return 0;
}