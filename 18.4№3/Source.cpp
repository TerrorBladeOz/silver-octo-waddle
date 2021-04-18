#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    // С помощью библиотеки algorithm
    int l[7];

    cout << "Введите 7 целых чисел: \n";

    for (int i = 0; i < 7; i++) {
        cin >> l[i];
    }
    sort(begin(l), end(l));
    for (int i = 0; i < 7; i++) {
        cout << l[i] << " ";
    }
    cout << "\nМинимальное значение из 7 чисел >>>  " << l[0]<<endl;
    cout << "\nМаксимальное значение из 7 чисел >>> " << l[6]<<endl;
    return 0;
}