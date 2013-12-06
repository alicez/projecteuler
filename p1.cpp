#include <iostream>
using namespace std;

#define MAX_NUM 1000
#define NUM1 3
#define NUM2 5
int main()
{
	int total = 0;
	for (int i = 0; i < MAX_NUM; i++) {
	  total += (i % NUM1 == 0 || i % NUM5 == 0 ? i : 0);
	}
	cout << total << "\n";
	return 0;
}
