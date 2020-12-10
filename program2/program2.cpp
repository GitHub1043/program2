// program2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int num;

	// Output the first line

	cout << "The number generated is ";

	for (int i = 0; i < 25; i++){
		num = rand();								// Generate random numbers
		cout << " " << num;

		if (i % 10 == 0){
			cout << endl;							// Skip 10 lines
		}

	}

	cout << endl;									// Skip a line

	return 0;
}

