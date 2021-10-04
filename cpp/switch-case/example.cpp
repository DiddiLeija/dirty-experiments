/*

Identify some of the most popular
web codes to explain its meaning. Some codes
may not be avaliable.

*/

#include<iostream>

using namespace std;

int main() {
  // define the necessary values
  int code;
  
  // get the code
  cout<<"Enter code: "; cin>>code;
  cout<<endl<<"Meaning: ";
  
  // check the code
  switch(code) {
    case 200:
      cout<<"OK"; break;
    case 204:
      cout<<"No content"; break;
    case 302:
      cout<<"Redirection"; break;
    case 400:
      cout<<"Bad Request"; break;
    case 401:
      cout<<"Unauthorized"; break;
    case 403:
      cout<<"Forbidden"; break;
    case 404:
      cout<<"Page not found"; break;
    case 418:
      cout<<"I'm a teapot"; break;
    case 500:
      cout<<"Server error"; break;
  }
  
  // exit code 0 (success)
  return 0;
}
