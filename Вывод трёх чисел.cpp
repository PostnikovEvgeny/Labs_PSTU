#include <iostream>
using namespace std;
int main() {
	const int a = 10;
	int b, c, k;
	b = 20;
	k = b;
	c = --k;
	cout << a<< endl;
	cout << b<< endl;
	cout << c;
	return 0;
}