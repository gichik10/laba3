﻿#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    for (int i = 1; i <= 10 ; i++) {
        for(int j=1;j<=10;j++)
        cout << i << "*" << j << "=" << j * i << endl;
        cout << endl;
    }
}
