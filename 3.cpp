#include <iostream>
using namespace std;

int main() {
	const int limit { 1000 };
	double a { 0 };
	for (int i = 1; i <= limit; i++) {
		a += i;
	}
	a /= (double) limit;

	cout << "Average of all integers from 1 to " << limit << " is " << a
			<< endl;

	return 0;
}
