#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int a,c, c1, c2, c3;
	cout << "������� �������������� ����� >>> ";
	cin >> a;
	while (true) {
		if (a < 10000 && a > 999) {
			break;
		}
		else {

			cout << "�� ����� �� �������������� �����, ��������� ���� >>> ";
			cin >> a;

		}
	}
		cout << "\n";
		c = a / 1000;
		c1 = (a / 100) % 10;
		c2 = (a / 10) % 10;
		c3 = a % 10;
		cout << "���������� ����� >>> "<<c1 <<c << c3<<c2 ;

	return 0;
}