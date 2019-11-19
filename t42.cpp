#include <iostream> 
#include <cmath>
using namespace std;
int main() {
	int n;
	cin >> n;
	if (n >= 2 && n <= 5) {
		n = n + 10;
		cout << n << " ";
	}
	else if (n > 7 && n < 40) {
		n = n - 100;
		cout << n;
	}
	else if (n > 0 && n < 3000) {
		n = 3 * n;
		cout << n;
	}
	else {
		n = 0;
		cout << n;
	}
	return 0;
}