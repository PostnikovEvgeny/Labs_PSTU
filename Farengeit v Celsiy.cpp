#include <iostream>
using namespace std;
int main() {
	float F, C;
	setlocale(LC_ALL, "");
	cout << "������� ����������� �� ����������\n";
	cin >> F;
    C = ((5.0 / 9.0) * (F - 32));
	cout << "����������� � �������� �����:";
	cout << C;
	return 0;
}