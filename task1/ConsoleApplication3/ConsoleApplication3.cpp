// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int matrix[6][6] = { {11,12,13,14,15,16}, {21,22,23,24,25,26},{31,32,33,34,35,36},{41,42,43,44,45,46},{51,52,53,54,55,56},{61,62,63,64,65,66} };
	
	int sum2 = 0,sum4=0,sum6=0;
	
	
		for (int j = 0; j < 6; j++)
		{
			sum2 = sum2 + matrix[1][j];
			sum4 = sum4 + matrix[3][j];
			sum6 = sum6 + matrix[5][j];
			
			
		}
		cout << "2nd row sum: " << sum2 << endl;
		cout << "4th row sum: " << sum4 << endl;
		cout << "6th row sum: " << sum6 << endl;
		cout << sum2 + sum4 + sum6 << endl;
	
	
    return 0;
}

