#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    // � ������� ���������� algorithm
    int l[7];

    cout << "������� 7 ����� �����: \n";

    for (int i = 0; i < 7; i++) {
        cin >> l[i];
    }
    sort(begin(l), end(l));
    for (int i = 0; i < 7; i++) {
        cout << l[i] << " ";
    }
    cout << "\n����������� �������� �� 7 ����� >>>  " << l[0]<<endl;
    cout << "\n������������ �������� �� 7 ����� >>> " << l[6]<<endl;
    return 0;
}