#include <iostream>
using namespace std;
int main() {
	int i = 1;
	int a;
	a = ++i * i++;
	cout << a;
	return 0;
}