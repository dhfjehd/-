#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int n, i,c=0;
	// n is the number, i for the loop and c is the counter
	 cout << "Enter a number ====> ";
	cin >> n; // get the number
	for (i = 1; i <= n ; i++)
	    if (n % i == 0) // if divison was done
	      c++;// couter+1
	if (c == 2)
	  cout << "is prime";
	else
	 cout << "Not prime";
_getch();
    return 0;
}
