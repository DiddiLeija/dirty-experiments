#include<iostream>
#include<math.h> // this is the "math" library

using namespace std;

int main() {
  // create the variables
  float a, b, c, d;
  float result=0;

  // ask for the values
  cout<<"Introduce 'a': "; cin>>a;
  cout<<"Introduce 'b': "; cin>>b;
  cout<<"Introduce 'c': "; cin>>c;
  cout<<"Introduce 'd': "; cin>>d;

  // make the operation and save it
  // at "result"
  result = (a + pow(b * a), 3) - (sqrt((c / d)));

  // show the result
  cout<<endl<<"Result: "<<result<<endl;

  return 0; // exit code 0
}
