#include<iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	int a, k, p, i;
	k = 0; p = 0;
	srand(time(NULL)); 
	a= rand() % 100 + 1;
	
	cout << ("Угадай число:a. У тебя есть 7 попыток.\n");
	while ((k<7) && (p < 1))
	{
		cout << ("введите число\n");
		cin >> i;
		if (i > a)
		{
			cout << ("введённое число больше, чем a\n"); k += 1; 
		}
		else
		{
			if (i < a)
			{
				cout << ("введённое число меньше, чем a\n"); k += 1; 
			}
			else
			{
				if (i = a)
				{
					cout << ("вы угадали число! a=") << a; p += 1;
				}
			}
		}
			if (k == 7)
			{ 
				cout << ("вы не угадали число! a=") << a; 
			}
	}
	return 0;
}