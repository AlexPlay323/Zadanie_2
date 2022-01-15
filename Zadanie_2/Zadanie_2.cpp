#include <iostream>
#include <math.h>
#include <locale>
using namespace std;
//Вводиться число с клавиатуры и считается количество цифр в нем
int main()
{
    setlocale(LC_ALL, "Russian");
    int num,i;
    cout << "Введите число" << '\n';
    cin >> num;
    for (i = 0; num != 0; i++) {
        num /= 10;
    }
    cout << i;
    switch (i) {
        case 2: cout << " цифры"; break;
        case 1: cout << " цифра"; break;
        case 3: cout << " цифры"; break;
        case 4: cout << " цифры"; break;
        default: cout << " цифр"; break;
    }
    return 0;
}