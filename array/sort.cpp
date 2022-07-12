#include <iostream>
#include <type_traits>
using namespace std;
int main(){
	// get the dates
	int number = 0;
	cin >> number;
	cout << "Read";
	int list[number];
	for (int i = 0; i < number; i++) {
		cin >> list[i];
	}
	// change the dates
	for (int i = 0; i < number-1; i++) {
		for (int j = 0; j < number-1-i; j++) {
			if (list[j] > list[j+1]) {
				swap(list[j], list[j+1]);
			}	
		}
	}
	// print list
	cout << "Out:";
	for (int i = 0; i < number; i++) {
		cout << list[i] << " ";
	}
	return 0;
}
