#include <iostream>;
using namespace std;
int main()
{
	int x, a, b, c, t, f;
	f = false;
	setlocale(LC_ALL, "");
	cout << "������� ���������� ����� \n ";
	cin >> x;
	while ((x < 100) || (x > 999))
	{
		cout << "�������� ����� �� ����������, ��������� ����\n";
		cin >> x;
	}
	a = x % 10;
	x /= 10;
	b = x % 10;
	c = x / 10;

	while ((a == b) || (b == c) || (a == c))
	{
		cout << "� ����� ���� ����������, ��������� ���� \n";
		cin >> x;
		a = x % 10;
		x /= 10;
		b = x % 10;
		c = x / 10;
	}

		cout << "\n��� ���������  ������������������ �����: \t";
		cout << a << b << c << "\t";
		t = c;
		c = b;
		b = t;
		cout << a << b << c << "\t";
		t = a;
		a = b;
		b = t;
		cout << a << b << c << "\t";
		t = a;
		a = c;
		c = t;
		cout << a << b << c << "\t";
		t = c;
		c = b;
		b = t;
		cout << a << b << c << "\t";
		t = a;
		a = b;
		b = t;
		cout << a << b << c << "\t";
		t = c;
		c = b;
		b = t;
		cout << a << b << c << "\t";


		if ((a > b) && (a > c))
		{
			cout << "���������� �� ���� �����:" << a;
			if (b > c)
			{
				cout << b << c;
			}
			else
			{
				cout << c << b;
			}
		}
		else
		{
			if ((b > a) && (b > c))
			{
				cout << "���������� �� ���� �����:" << b;
				if (a > c)
				{
					cout << a << c;
				}
				else
				{
					cout << c << a;
				}
			}
			else
			{
				if ((c > b) && (c > a))
				{
					cout << "���������� �� ���� �����:" << c;
					if (b > a)
					{
						cout << b << a;
					}
					else
					{
						cout << a << b;
					}
				}
				else
				{
					cout << a << b;
				}
			}
		}

return 0;
}
