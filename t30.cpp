#include <iostream> 
#include <cmath>
using namespace std;
int main() {
	int a,n ;
	cin >> a>>n;
	int d = 1;
	for (int i = 0; i <n; i++) {
		d =d * a;
	}
	cout << d << endl;
	return 0;
}