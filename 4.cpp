#include <iostream>
using namespace std;

int main() {
	const int limit { 20 };
	int a { 0 };
	long int s { 1 };
	cout << "Enter an integer between 1 and " << limit << ": ";
	cin >> a;
	if (1 <= a && a <= limit) {
		for (int i = a; i <= limit; i++) {
			s *= i;
		}

		cout << "The product of all integers between " << a << " and " << limit
				<< " is " << s << endl;
	} else {
		cout << "Unacceptable number!" << endl;
	}
	return 0;
}
