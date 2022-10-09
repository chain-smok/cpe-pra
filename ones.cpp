#include <iostream>
#include <cstdlib>
#include <cstdio>
 
using namespace std;
 
int main()
{
	int n;
	while (cin >> n) {
		int value = 1,count = 1;
		while (value%n) {
			value = value%n*10+1;
			count ++;
		}
		printf("%d\n",count);
	}
	return 0;
}