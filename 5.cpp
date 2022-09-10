#include <iostream>
using namespace std;

int main() {
	int n { 0 };
	cout << "Enter a number: ";
	cin >> n;
	for (int i = 2; i <= 9; i++) {
		cout << n << " * " << i << " = " << n * i << endl;
	}
	return 0;
}
