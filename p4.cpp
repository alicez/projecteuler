#include <iostream>
using namespace std;

bool digits(int i) {
	return (i == 100 || i == 999 || 
	  (i / 999 < 1 && i/100 >1));
}
int make_num(int i) {
	int flip = 0;
	int x = 100;
	int j = i;
	while (i > 0) {
		flip += (i % 10) * x;
		i /= 10;
		x /= 10;
	}
	return j * 1000 + flip;
}
int make_small_num(int i) {
	int right = (i / 10) % 10;
	int left = (i / 100) % 10;
	return i * 100 + 10 * right + left;
}
int two_factors(int x) {
	for (int i = 100; i <= 999; i++) {
		if (x % i == 0 && digits(x/i)) return i;
	}
	return 0;
}
int main()
{
	/* Check 6 digit multiples */
	for (int i = 999; i >= 100; i--) {
		int j = make_num(i);
		if (two_factors(j)) {
			cout << j << "\n";
			return 0;
		}
	}
	
	/* Check 5 digit multiples */
	for (int i = 999; i >= 100; i--) {
		int j = make_small_num(i);
		if (two_factors(j)) {
			cout << j << "\n";
			return 0;
		}
	}
}

