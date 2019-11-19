#include <iostream> 
#include <cmath>
using namespace std;
int main() {
	double x, a;
	cin >> x >> a;
 double eachkg=a/x;
	double z;
	cin >> z;
	double y = z * eachkg;
	cout << y << endl;
	double k;
	cin >> k;
	double c = k / a;
	cout << c;
	return 0;
}