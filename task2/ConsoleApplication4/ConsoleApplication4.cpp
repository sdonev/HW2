// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int matrix[6][6] = { { 11,12,13,14,15,16 },{ 21,22,23,24,25,26 },{ 31,32,33,34,35,36 },{ 41,42,43,44,45,46 },{ 51,52,53,54,55,56 },{ 61,62,63,64,65,66 } };
	int i=0, sum=0,sumall=0;
	for (int j = 0; j < 6; j++) {
		if (matrix[i][j] % 2 != 0) {
			sum = sum + matrix[i][j];
		}
		if (i == 6) {
			break;
		}
		if (j == 5) {
			j = -1;
			i++;
			cout << "SUM: " << sum << endl;
			sumall = sumall + sum;
			sum = 0;
		}
		
		
	}
	cout << sumall << endl;
    return 0;
}

