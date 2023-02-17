
#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    while (i < 10) {
        cout << endl;
        i++;
        int r = 0;
        while (r < 10) {
            cout << endl;
            r++;
            cout << i << "*" << r << "=" << i * r ;
        }
    }
    return 0;
}

