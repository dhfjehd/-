#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
	int n, i; // number and loop variable
	cout << "Enter a number ====> ";
                                          // get the number from user
	cin >> n; // get the number
for (i = 1; i <=n; i++)// form 1 to n
	if (n % i == 0)
	cout << i << "\t"<<n/i<<endl;
	_getch();
    return 0;
}
