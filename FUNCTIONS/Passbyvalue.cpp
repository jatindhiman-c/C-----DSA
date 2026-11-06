#include <iostream>
using namespace std;


int sum(int a, int b){
    return a + b;
}


int main(){
    int a = 7, b = 1;  //! copy of a and b is made and the boxes of a nd b of function is as it is and no value is changed in it
cout << sum(a,b)  << endl; //! the new cop of a nd b has the values instead of the functon's a and b ;; 



    return 0;
}