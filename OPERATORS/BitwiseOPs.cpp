//? BITWISE OPERATORS DO THEIR WORK DIRECTLY ON BINARY BITS
#include <iostream>
using namespace std;

int main(){

int x = 4 , y =8;
cout << (x & y)<< endl;   //! BITWISE AND
cout << ( x | y) << endl;  //! bitwise or
 cout << (x^y) << endl; //! Bitwise XOR
 cout << (x<<y) << endl;
  cout << (x>>y) << endl;
    return 0;
}y