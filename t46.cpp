#include <iostream> 
#include <cmath>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a % 5 == 0 && b % 5 == 0)
		cout << a + b;
	 else if (a % 5 == 0 && c % 5 == 0)
		 cout << a + c;
	 else if (b % 5 == 0 && c % 5 == 0)
		 cout << c + b;
	else {
		cout << "Error";
	}
	return 0;
}