/*
Simple IO example
=================

This example shows a simple "main" function, which
takes a numeric value, and then print it.

(I tried this with a C++ editor, so tell me if this fails on another cases).
*/

// This library should be included on any C++ distribution, right?
#include<iostream>

// use a namespace to print things
using namespace std;

// main function
int main(){
	
	// define values
	float float_number;
	int int_number;
	
	// store input
	cout<<"Introduce a floating number:\n> ";
	cin>>float_number;
	cout<<"\nIntroduce an integer:\n>";
	cin>>int_number;
	
	// retrieve the results
	cout<<"\nFloat introduced:\n"<<float_number;
	cout<<"\nInteger introduced:\n"<<int_number<<endl; // the last value should have an extra "endline"
	
	return 0;  // return nothing
}
