// ConsoleApplication8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int i=0,count=0;
	
	for (;;) {
		i++;
		if (i % 2 == 1 && i%3==2 && i%4==3 && i%5==4 && i%6==5 && i%7==6 && i%8==7 && i%9==8) {
			cout << i << endl;
			count++;
		}
		
		if (count == 4) {
			break;
		}
	}
    return 0;
}

