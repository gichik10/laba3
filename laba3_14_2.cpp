#include <iostream>
using namespace std;
int main()
{
	int i = 0;
	do {
		i++;
		int r = 0;
		do {
			r++;
			cout << i << "*" << r << "=" << i * r << endl;
			
		}
		while (r < 10);
		cout << endl;
		
	} 
	while (i < 10);
	cout << endl;
}
