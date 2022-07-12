#include <iostream>
using namespace std;
int main(){
	int m, n;
	cin >> m >> n;
	bool list[m];
	int count = 0;
	int full_number = 0;
	for (int i = 0; full_number != m; i++) {
		if (i == m) {
			i = 0;
		}
		if (!(list[i])) {
			count++;
		}
		if (count == n) {
			count = 0;
			cout << i+1 << " ";
			list[i] = 0;
			full_number++;
		}
	}
	return 0;
}
