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
	char name[10];
	
	// store input
	cout<<"Introduce a floating number:\n> ";
	cin>>float_number;
	cout<<"\nIntroduce an integer:\n> ";
	cin>>int_number;
	cout<<"\nIntroduce a name (10 characters or less):\n> ";
	cin>>name;
	
	// retrieve the results
	cout<<"\nFloat introduced:\n"<<float_number;
	cout<<"\nInteger introduced:\n"<<int_number;
	cout<<"\nName (text) introduced:\n"<<name<<endl; // the last value should have an extra "endline"
	
	return 0;  // return an exit code 0
}
