
#include <iostream> 
#include <cmath>
using namespace std;
int main() {
	double vklad;
	cout << "Input vklad:";
	cin >> vklad;
	double perc;
	cout << "Input percent: ";
	cin >> perc;
	vklad = vklad + (vklad * 5 * perc)/100;
	cout << vklad << endl;
	return 0;
}