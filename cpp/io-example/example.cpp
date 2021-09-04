/*
Simple IO example
=================

This example shows a simple "main" function, which
takes a numeric value, and then print it.

(I tried this with a C++ editor, so tell me if this fails on another cases).
*/

// This library should be everywhere
#include<iostream>

// use a namespace to print things
using namespace std;

// main function
int main(){
	
	// define values
	float number;
	
	// store an input
	cout<<"Introduce a floating number:\n";
	cin>>number;
	
	// retrieve
	cout<<"\nNumber introduced:\n"<<number;
	
	return 0;  // return nothing
}
