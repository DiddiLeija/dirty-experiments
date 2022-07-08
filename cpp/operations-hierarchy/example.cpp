/*

Demonstrate some of the operations hierarchy
that's respected in C++ (like it should be).
I just wanted to confirm the behavior.

*/

#include<iostream>
using namespace std;

int main(){
	// define variables
	float a, b, r=0; // "r" should store that?

	// ask for the values
	cout<<"Introduce the value of 'a': "; cin>>a;
	cout<<"Introduce the value of 'b': "; cin>>b;

	// operate
	r=a/b+1;

	// The floating result could be truncated by this "method"
	cout.precision(3);

	// print the result
	cout<<"\nResult: "<<r<<endl;

	return 0;
}
