// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	const int r=5, k=4;
    int matrix[r][k] = { { 11, 17, 4, 10 },{ 29, 4, 18, 18 },{ 22, 14, 5, 5 },{ 1, 27, 1, 11 },{ 25, 2, 27, 6 } };
	int matrix1[r][k] = { {1,1,1,1},{ 1,1,1,1 },{ 1,1,1,1 },{ 1,1,1,1 },{ 1,1,1,1 } };
	int matrix2[r][k];
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < k; j++) {
			matrix2[i][j] = matrix[i][j] * (r*k);
		}
		
	}
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < k; j++) {
			cout <<" "<< matrix[i][j];
		}
		cout << endl;
	}
	cout << endl;
	cout << endl;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < k; j++) {
			cout << " "<<matrix1[i][j] ;
		}
		cout << endl;
	}
	cout << endl;
	cout << endl;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < k; j++) {
			cout << " "<<matrix2[i][j];
		}
		cout << endl;
	}
    return 0;
}

