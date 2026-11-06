#include <iostream>
using namespace std;

int prime(int n){
int count = 0;
int i;
for ( i = 2;i<=n;i++){
    if(n%i == 0){count++;}
}

cout << (count==1?  "prime" : "not prime");
return 0;
}






int main(){
prime(13);
    return 0;
}