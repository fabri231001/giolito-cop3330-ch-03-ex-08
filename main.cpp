/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Fabrizio Giolito
 */


#include <iostream>
#include "std_lib_facilities.h"

void even_odd_tester(int n){

	if(n % 2 == 1)
		cout << "The number " << n << " is odd\n";
	else
		cout << "The number " << n << " is even\n";
}

int main() {

	int value;
  
	cout << "What integer would you like to test?\n";
	cin >> value;

	even_odd_tester(value);

	return 0;
}
