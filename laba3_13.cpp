
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    int i = 2;
    int c = 0;
    int nu;
    cout << "Введите число:";
    cin >> nu;
    do {
        if (nu % i == 0) {
            c = 1;
        }
        i++;
    }
    while (nu != i);
        if (c == 1) 
        cout << "не простое число";
        else 
        cout << "простое число";
    return 0;
}
