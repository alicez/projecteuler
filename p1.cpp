#include <iostream>
using namespace std;

int main()
{
	int total = 0;
	for (int i = 0; i < 1000; i++) {
	  total += (i % 3 == 0 || i % 5 == 0 ? i : 0);
	}
	cout << total << "\n";
	return 0;
}