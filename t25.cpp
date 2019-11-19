#include <iostream> 
#include <cmath>
using namespace std;
int main() {
	double w, m, y;
	cout << "week: ";
	cin >> w;
	cout << "month: ";
	cin >> m;
	cout << "year: ";
	cin >> y;
	double d = w * 7 + m * 30 + y * 12 * 30;
	cout << d;
	return d;
}