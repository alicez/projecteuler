#include <iostream>
using namespace std;

#define FM 4000000

int main()
{
   int a = 1;
	int b = 2;
   
	int total = b;

	while (true) {
		int c = a + b;
		if (c > FM) break;
		total += (c % 2 == 0 ? c : 0);
		a = b;
		b = c;
	}
	
	cout << total << "\n";
	return 0;
}
