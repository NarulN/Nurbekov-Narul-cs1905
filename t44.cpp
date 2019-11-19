#include <iostream> 
#include <cmath>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	if (a != 10 && b != 10 && a % 2 == 0)cout << a + b;
	else {
		cout << sqrt(a) << sqrt(b) << endl;
	}
	return 0;
}