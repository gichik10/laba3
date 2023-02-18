#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    int numb;
    int r;
    cout << "enter numb:";
    cin >> numb;
    do {
        i++;
        r = numb * i;  
        cout << numb << "*" << i << "=" << r << endl;
    }
    while (i < 10);
    return 0;
}
