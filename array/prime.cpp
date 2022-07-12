#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstring>
using namespace std;
int main(){
	int n = 0;
	cin >> n;
	bool list[n+1];
	memset(list, true, sizeof(list));
	for (int i = 2; i <= sqrt(n); i++) {
		if (list[i]) {
			int number = n/i;
			for (int j = 2; j <= number; j++) {
				list[i*j] = false;
			}
		}
	}
	for (int t = 0,i = 2; i <= n; i++) {
		if (list[i]) {
			cout << setw(5) << i;
			t++;
		}
		if (t == 5) {
			t = 0;
			cout << endl;
		}
	}
	return 0;
}
