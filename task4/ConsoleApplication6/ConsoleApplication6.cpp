// ConsoleApplication6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	const int n =5;
	double matrix[2][n];
	double q;
    for (int j = 0; j < n; j++) {
		cout << "Enter 2 numbers: ";
		for (int i = 0; i < 2; i++) {
			cin >> q;
			matrix[i][j]=q;
			cout << endl;
		}
	}
	int i = 0;
	for (int j = 0; j < n; j++) {
		double m = (matrix[i][j] / matrix[i + 1][j])*100;
		int t = m;
		cout << matrix[i][j] << " / " << matrix[i + 1][j] << " = " << t << "%" << endl; ;
	}
    
    return 0;
}

