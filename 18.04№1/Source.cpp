#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"rus");
	int a,b = 0,c,c1,c2,c3,c4,c5,x,x1;
	cout << "Введите шестизначное число >>> ";
	cin >> a;
	while (true) {
		if (a < 1000000 && a > 99999) {
			break;
		}
		else {
			
		cout << "Вы ввели не шестизначное число, повторите ввод >>> ";
		cin >> a;
			
		}
	}
	cout << "\n";
	c = a / 100000;
	c1 = (a / 10000) % 10;
	c2 = (a / 1000) % 10;
	c3 = (a / 100) % 10;
	c4 = (a / 10) % 10;
	c5 = a % 10;
	x = c + c1 + c2;
	x1 = c3 + c4 + c5;
	if (x == x1) {
		cout << "Число " << a << " является :)\n";
	}
	else cout << "Число " << a << " является :(\n";

		
	return 0;
}