
#include <iostream>
int main()
{
    int i = 0;
    int sum = 0;
    do {
        sum += i;
        i++;
    } while (i <= 100);
    std::cout << sum;

}

