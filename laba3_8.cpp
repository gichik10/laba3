
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    int c = 0;
    int numb;
    std::cout << "Введите число:";
    std::cin >> numb;
    for (int r = 2; r != numb; r++) {
        if (numb % r == 0) {
            c = 1;

        }
    }

    if (c == 1)
        cout << "не простое";
    else
        cout << "простое";
    return 0;

}