#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	int a, k, p, i;
	k = 0; p = 0;
	srand(time(NULL)); 
	a= rand() % 100 + 1;
	
	cout << ("������ �����:a. � ���� ���� 7 �������.\n");
	while ((k<7) && (p < 1))
	{
		cout << ("������� �����\n");
		cin >> i;
		if (i > a)
		{
			cout << ("�������� ����� ������, ��� a\n"); k += 1; 
		}
		else
		{
			if (i < a)
			{
				cout << ("�������� ����� ������, ��� a\n"); k += 1; 
			}
			else
			{
				if (i = a)
				{
					cout << ("�� ������� �����! a=") << a; p += 1;
				}
			}
		}
			if (k == 7)
			{ 
				cout << ("�� �� ������� �����! a=") << a; 
			}
	}
	return 0;
}