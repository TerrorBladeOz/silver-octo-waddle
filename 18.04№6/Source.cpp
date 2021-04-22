#include <iostream>
using namespace std;

double  proc(double a, double  b, double  c)
{
	const int z = 200; double a1 = 0, b1 = 0, c1 = 0, max, a2, b2, c2; int x = 0;
	if (a <= 500) 
	{
		a1 = a * 0.03;
	}
	else if (a >= 501 && a <= 1000)
	{
		a1 = a * 0.05;
	}
	else if (a > 1000)
	{
		a1 = a * 0.08;
	}
	/**/
	if (b <= 500)
	{
		b1 = b * 0.03;
	}
	else if (b >= 501 && b <= 1000)
	{
		b1 = b * 0.05;
	}
	else if (b > 1000 )
	{
		b1 = b * 0.08;
	}
	/**/
	if (c <= 500)
	{
		c1 = c * 0.03;
	}
	else if (c >= 501 && c <= 1000)
	{
		c1 = c * 0.05;
	}
	else if (c > 1000)
	{
		c1 = c * 0.08;
	}
	cout << "\n\n" << a1 << " " << b1 << " " << c1 << " \n\n";
	a2 = a1 + z;
	b2 = b1 + z;
	c2 = c1 + z;
	cout <<"\n\n"<< a2 << " " << b2 << " " << c2 << " \n\n";
	if (a2 > b2 && a2 > c2) 
	{ 
		max = a1; x = 1; 
	};
	if (b2 > a2 && b2 > c2) 
	{ 
		max = b2; x = 2; 
	}
	else { max = c2; x = 3; };
	cout << "Зарпалата 1 менеджера составит "<<a2<<" $\n";
	cout << "Зарпалата 2 менеджера составит " << b2 << " $\n";
	cout << "Зарпалата 3 менеджера составит " << c2 << " $\n";
	if (x == 1) 
	{
		cout << "Лучший менеджер номер " << x << " и его зарплата состовляет " << a2<<" $\n";
	}
	else if (x == 2)
	{
		cout << "Лучший менеджер номер " << x << " и его зарплата состовляет " << b2 << " $\n";
	}
	else if (x == 3)
	{
		cout << "Лучший менеджер номер " << x << " и его зарплата состовляет " << c2 << " $\n";
	}
	return (a, b, c);
}
int main()
{
	setlocale(LC_ALL, "rus");
	int d, f, g;
	cout << "Введите уровень продаж для 1 менеджера: ";
	cin >> d;
	cout << "Введите уровень продаж для 2 менеджера: ";
	cin >> f;
	cout << "Введите уровень продаж для 2 менеджера: ";
	cin >> g;
	proc(d, f, g);
	return 0;
}