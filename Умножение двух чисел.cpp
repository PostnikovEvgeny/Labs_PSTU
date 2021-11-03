#include <iostream>
using namespace std;
int main() 
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << ("введите числа") << endl;
	cin >> a >> b;
	cout << ("результат:") << endl;
	cout << a * b;
	return 0;
}