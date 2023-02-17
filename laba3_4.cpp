
#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    int number;
    int r;
    cout << "enter number:";
    cin >> number;
    while (i < 10) {

        i++;
        r = number * i;
        cout << number << "*" << i << "=" << r << endl;
    }
    return 0;
}

