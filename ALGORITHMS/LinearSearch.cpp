// in this algorithm we start a loop either from indice 0 or from last indice and search for out target
#include <iostream>
using namespace std;

int main(){
int arr[10] = {1,3,2,4,7,5,8,9,10,6};
int n;
cout << "Enter the number to be searched :";
cin >> n;
cout << "Searching " ;
cout << n << endl;
for(int i =0; i<10;i++){
if(arr[i]==n){ cout << "It is present at ";
cout << i << endl;}



}

    return 0;
}