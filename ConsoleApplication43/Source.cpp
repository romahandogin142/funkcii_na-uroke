#include <stdio.h>
#include <iostream>
#include <stdarg.h>
using namespace std;
int t2(int a = 5, char b = '-');
void addRD(int d, int &k)
{
	k = 10 * k+d;
}

int sumNumber(int num, ...);

void main()
{
	/*int k, d;
	cout << "k ";
	cin >> k;
	for (size_t i = 0; i < 2; i++)
	{
		while (1)
		{
			cout << "d: ";
			cin >> d;
			if (d >= 0 && d <= 9)
			{
				addRD(d, k);
					break;
			}
			else {
				cout << " !!! " << endl;
			}
		}
		cout << " k=  " << k<< endl;
	}
	t2(20);
	cout << endl;*/
	
	int sum = sumNumber(9, 1, 1, 1, 1, 1, 1, 1, 1, 1);
	cout << sum << endl;

}

int sumNumber(int num, ...)
{
	int sum = 0.0;
	va_list arg;
	//инициализируем указатель arg
	va_start(arg, num);

    //сумируем ряды
	double t;
	for ( ; num; num--)
	{
		t = va_arg(arg, double);
		sum += t;
	}

	//завершение 
	va_end(arg);


	return sum;
}





int t2(int a, char b)
{
	for (int i = 0; i < a; i++)
	{
		cout << b;
	}
	return 0;
}