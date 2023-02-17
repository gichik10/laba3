

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int i = 1;
    int r;
    int result = 1;
    cout << "Введите факториал числа:";
    cin >> r;
    while (i <= r) {
        result = result * i;
        i++;

    }
  
    cout << "факториал числа :" << result << endl;
    return 0;
}