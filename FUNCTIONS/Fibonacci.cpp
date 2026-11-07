#include <iostream>
using namespace std;

int main(){

int p,l,f ,n;
n = 20;
p = 0;
l = 1;
while(p  < n-3){

f = p+l;
l = p;
p = f;

cout << f << "\t";
}


    return 0;
}