#include <iostream>
using namespace std;

int main() {
	int x { 0 }, y { 0 }, p { 1 };
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter y: ";
	cin >> y;
	for (int i = 1; i <= y; i++) {
		p *= x;
	}
	cout << x << "^" << y << " = " << p << endl;

	return 0;
}
