#include <iostream>
using namespace std;
int main() {
	float F, C;
	setlocale(LC_ALL, "");
	cout << "введите температуру по фаренгейту\n";
	cin >> F;
    C = ((5.0 / 9.0) * (F - 32));
	cout << "температура в цельсиях равна:";
	cout << C;
	return 0;
}