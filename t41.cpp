#include <iostream> 
#include <cmath>
using namespace std;
int main() {
	int n;
	cin >> n;
	if (n > -100 && n<100) {
		n = 0;
		cout << n;
	}
	else {
		n = n + 1;
		cout << n;
	}
	return 0;
}