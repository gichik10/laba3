#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int i = 1;
	int res = 1;
	int numb;
	cout << "Введите факториал числа:";
	cin >> numb;
	do {
		res = res * i;
		i++;
	}
	while (numb >= i);
	cout << "факториал числа:" << res << endl;
	return 0;
}
