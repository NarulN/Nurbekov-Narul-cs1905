#include <iostream> 
#include <cmath>
using namespace std;
int main() {
	int a;
	cin >> a;
	if (a == 1 || a == 2 || a == 3)cout << "Winter";
	if (a == 4 || a == 5 || a == 6)cout << "Spring";
	if (a == 7 || a == 8 || a == 9)cout << "Summer";
	if (a == 10 || a == 11 || a == 12)cout << "Autumn";
	return 0;
}