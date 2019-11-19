#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a[4] ,max = -2000000, d = 0;
	for (int i = 0; i < 4; i++) {
		cin >> a[i];
		if (a[i] % 2 == 0) {
			d++;
			if (max < a[i]) {
				max = a[i];
			}
		}
	}
	if (d == 0) {
			cout << "not found" << endl;
		}
	else {
		cout << max << endl;
	}
	return 0;
}