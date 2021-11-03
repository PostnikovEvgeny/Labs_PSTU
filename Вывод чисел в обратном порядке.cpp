#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	int a, b, c, d, e;
	cout << ("введите пять чисел")<<endl;
	cin >> a >> b >> c >> d >> e;
	cout << ("вывод:") << endl;
	cout << e << d << c << b << a;
	return 0;
}