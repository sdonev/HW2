// ConsoleApplication9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int fib(int n) {
	if (n == 0) {
		return 0;
	}
    if (n == 1 ||n==2) {
		return 1;
	}
	return fib(n - 1) + fib(n - 2);
} 

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i < 40; i++) {
		if (i == n) {
			cout << fib(i) << endl;
		}
	}
    return 0;
}

