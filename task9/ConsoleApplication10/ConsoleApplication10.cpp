// ConsoleApplication10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

bool devides(int n) {
	int d1, d2, d3, d4, d5,sumofd=0;
	if (n >= 111 && n <= 999) {
		d3 = n % 10;
		d2 = (n / 10) % 10;
		d1 = n / 100;
		sumofd = d1 + d2 + d3;
	}
	if (n >= 1000 && n <= 9999) {
		d4 = n % 10;
		d3 = (n / 10) % 10;
		d2 = (n / 100) % 10;
		d1 = n / 1000;
		sumofd = d1 + d2 + d3 + d4;
	}
	if(n >= 10000 && n <= 22222) {
		d5 = n % 10;
		d4 = (n / 10) % 10;
		d3 = (n / 100) % 10;
		d2 = (n / 1000) % 10;
		d1 = n / 10000;
		sumofd = d1 + d2 + d3 + d4 + d5;
	}
	if (n%sumofd == 0) {
		return true;
	}
	if (n%sumofd != 0) {
		return false;
	}

}

int main()
{
	int Num;
	do {
		cout << "Enter a number [111-22222]: ";
		cin >> Num;
	} while (Num < 111 || Num>22222);
	cout <<devides(Num)<<endl;
	
    return 0;
}

