#include <iostream>
using namespace std;

int main() {
	const int limit { 500 };
	int a { 0 }, s { 0 };
	cout << "Enter a number: ";
	cin >> a;
	for (int i = a; i <= limit; i++) {
		s += i;
	}
	cout << "The sum of all numbers from " << a << " to " << limit << " is "
			<< s << endl;
	return 0;
}
