#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    int r;
    int res = 1;
    cout << "Введите факториал числа:";
    cin >> r;
    for (int i = 1; r >= i; i++) {
        res = res * i;
    }
    cout<< "факториал:" << res;
}
