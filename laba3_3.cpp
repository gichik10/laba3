#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int i = 1;
	int number;
	int cnt = 0;
	cout << "Введите число:";
	cin >> number;
	while (i != number + 1)
	{
		if (number % i == 0)
		{
			cnt += 1;
			if (cnt > 2)
			{
				break;
			}
		}
		i++;
	}
	if (cnt == 2)
	{
		cout << "Простое число" << endl;

	}
	if ((cnt > 2) || (cnt < 2))
	{
		cout << "Не простое число " << endl;
	}
	return 0;
}





