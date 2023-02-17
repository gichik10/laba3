
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    int nu;
    int r = 0;
    cout << "enter:";
    cin >> nu;
    for (int i = 1; i <= 10; i++) {
        r = nu * i;
        cout << nu << "*" << i << "=" << r << endl;
    }
   
    return 0;




}