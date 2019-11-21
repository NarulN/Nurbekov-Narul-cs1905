//55
#include <iostream> 
using namespace std;
int main() {
	int a, b, c, cnt_p = 0;
	cin >> a >> b >> c;
	if (a > 0) {
		cnt_p++;
	}
	if (b > 0) {
		cnt_p++;
	}
	if (c > 0) {
		cnt_p++;
	}
	cout << endl << "Positive -> " << cnt_p << endl;
	return 0;
}