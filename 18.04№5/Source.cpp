#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int a, b, c, d, e, f, x, y = 0,dif;
    int m1 = 31, m2 = 28,m22 = 29, m3 = 31, m4 = 30, m5 = 31, m6 = 30, m7 = 31, m8 = 31, m9 = 30, m10 = 31, m11 = 30, m12 = 31;
    cout << "Введите день первой даты в целых числах: " << endl;
    cin >> a;
    cout << "Введите месяц первой даты в целых числах: " << endl;
    cin >> b;
    cout << "Введите год первой даты в целых числах: " << endl;
    cin >> c;
    if (a > 31 || b > 12) {
        cout << "Вы ввели неправильныю дату !!!";
    }
    else {


        if (c % 400 == 0 || c % 4 == 0) {

            switch (b) {
            case 1:
                x = a;
                break;
            case 2:
                x = m1 + a;
                break;
            case 3:
                x = m1 + m22 + a;
                break;
            case 4:
                x = m1 + m22 + m3 + a;
                break;
            case 5:
                x = m1 + m22 + m3 + m4 + a;
                break;
            case 6:
                x = m1 + m22 + m3 + m4 + m5 + a;
                break;
            case 7:
                x = m1 + m22 + m3 + m4 + m5 + m6 + a;
                break;
            case 8:
                x = m1 + m22 + m3 + m4 + m5 + m6 + m7 + a;
            case 9:
                x = m1 + m22 + m3 + m4 + m5 + m6 + m7 + m8 + a;
                break;
            case 10:
                x = m1 + m22 + m3 + m4 + m5 + m6 + m7 + m8 + m9 + a;
                break;
            case 11:
                x = m1 + m22 + m3 + m4 + m5 + m6 + m7 + m8 + m9 + m10 + a;
                break;
            case 12:
                x = m1 + m22 + m3 + m4 + m5 + m6 + m7 + m8 + m9 + m10 + m11 + a;
                break;
            default:
                cout << "Вы ввели номер месяца, который не существует!!!";
            }
        }
        else if (c % 100 != 0) {
            switch (b) {
            case 1:
                x = a;
                break;
            case 2:
                x = m1 + a;
                break;
            case 3:
                x = m1 + m2 + a;
                break;
            case 4:
                x = m1 + m2 + m3 + a;
                break;
            case 5:
                x = m1 + m2 + m3 + m4 + a;
                break;
            case 6:
                x = m1 + m2 + m3 + m4 + m5 + a;
                break;
            case 7:
                x = m1 + m2 + m3 + m4 + m5 + m6 + a;
                break;
            case 8:
                x = m1 + m2 + m3 + m4 + m5 + m6 + m7 + a;
            case 9:
                x = m1 + m2 + m3 + m4 + m5 + m6 + m7 + m8 + a;
                break;
            case 10:
                x = m1 + m2 + m3 + m4 + m5 + m6 + m7 + m8 + m9 + a;
                break;
            case 11:
                x = m1 + m2 + m3 + m4 + m5 + m6 + m7 + m8 + m9 + m10 + a;
                break;
            case 12:
                x = m1 + m2 + m3 + m4 + m5 + m6 + m7 + m8 + m9 + m10 + m11 + a;
                break;
            default:
                cout << "Вы ввели номер месяца, который не существует!!!";
            }

        }

        cout << "Введите день второй даты в целых числах: " << endl;
        cin >> d;
        cout << "Введите месяц второй даты в целых числах: " << endl;
        cin >> e;
        cout << "Введите год второй даты в целых числах: " << endl;
        cin >> f;
        if (d > 31 || e > 12) {
            cout << "Вы ввели неправильныю дату !!!";
        }
        else {
            if (f % 400 == 0 || c % 4 == 0) {
                switch (e) {
                case 1:
                    y = d + y;
                    break;
                case 2:
                    y = m1 + d + y;
                    break;
                case 3:
                    y = m1 + m22 + d + y;
                    break;
                case 4:
                    y = m1 + m22 + m3 + d + y;
                    break;
                case 5:
                    y = m1 + m22 + m3 + m4 + d + y;
                    break;
                case 6:
                    y = m1 + m22 + m3 + m4 + m5 + d + y;
                    break;
                case 7:
                    y = m1 + m22 + m3 + m4 + m5 + m6 + d + y;
                    break;
                case 8:
                    y = m1 + m22 + m3 + m4 + m5 + m6 + m7 + d + y;
                    break;
                case 9:
                    y = m1 + m22 + m3 + m4 + m5 + m6 + m7 + m8 + d + y;
                    break;
                case 10:
                    y = m1 + m22 + m3 + m4 + m5 + m6 + m7 + m8 + m9 + d + y;
                    break;
                case 11:
                    y = m1 + m22 + m3 + m4 + m5 + m6 + m7 + m8 + m9 + m10 + d + y;
                    break;
                case 12:
                    y = m1 + m22 + m3 + m4 + m5 + m6 + m7 + m8 + m9 + m10 + m11 + d + y;
                    break;
                }
            }
            else if (f % 100 != 0) {
                switch (e) {
                case 1:
                    y = d + y;
                    break;
                case 2:
                    y = m1 + d + y;
                    break;
                case 3:
                    y = m1 + m2 + d + y;
                    break;
                case 4:
                    y = m1 + m2 + m3 + d + y;
                    break;
                case 5:
                    y = m1 + m2 + m3 + m4 + d + y;
                    break;
                case 6:
                    y = m1 + m2 + m3 + m4 + m5 + d + y;
                    break;
                case 7:
                    y = m1 + m2 + m3 + m4 + m5 + m6 + d + y;
                    break;
                case 8:
                    y = m1 + m2 + m3 + m4 + m5 + m6 + m7 + d + y;
                    break;
                case 9:
                    y = m1 + m2 + m3 + m4 + m5 + m6 + m7 + m8 + d + y;
                    break;
                case 10:
                    y = m1 + m2 + m3 + m4 + m5 + m6 + m7 + m8 + m9 + d + y;
                    break;
                case 11:
                    y = m1 + m2 + m3 + m4 + m5 + m6 + m7 + m8 + m9 + m10 + d + y;
                    break;
                case 12:
                    y = m1 + m2 + m3 + m4 + m5 + m6 + m7 + m8 + m9 + m10 + m11 + d + y;
                    break;

                }
            }
            if (c == f)
            {
                cout << "Количество дней между этими двумя датами :" << y - x;
            }
            else
                cout << "Количество дней между этими двумя датами :" << (f - c) + (y - x) << endl;
        }
    }
    return 0;
}
