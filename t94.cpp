#include <iostream>
using namespace std;
int main() {
	int  n;
	cin >> n;
	double d = 0;
	for (int i = 1; i<=n; i++) {
		d = d + 1.0/i;
	}
	cout << d;
	return 0;
}