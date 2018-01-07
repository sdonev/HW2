// ConsoleApplication7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void binary(int n)
{
	int rem;

	if (n <= 1)
	{
		cout << n;
		return;
	}
	rem = n % 2;
	binary(n / 2);
	cout << rem;
}

int main()
{
	int dec, bin;
	cout << "Enter the number : ";
	cin >> dec;

	if (dec < 0)
		cout << dec << " is not a positive integer." << endl;
	else
	{
		cout << "The binary form of " << dec << " is ";
		binary(dec);
		cout << endl;
	}
    return 0;
}

