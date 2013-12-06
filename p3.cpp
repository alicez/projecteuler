#include <iostream>
using namespace std;

#define NUM 600851475143

int main()
{
	long cur = NUM;
	long i = 1;
	while (cur > 1) {
		i++;
		while (cur % i == 0)
			cur /= i;
	}

	cout << i << "\n";
	return 0;
}
