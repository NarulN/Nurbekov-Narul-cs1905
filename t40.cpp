#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n;
	cin >> n;
	if (n > -10 && n < 10) {
		n = n + 5;
		cout << n;
	}
	else {
		n = n - 10;
		cout << n << endl;
	}
	return 0;
}