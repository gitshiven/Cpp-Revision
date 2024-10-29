#include <iostream>
using namespace std;

int main(){

int number[15];   //declare array

//accessing an array    
cout<<number[10];   //print garbage value
cout<<endl;

//initialising an array
int second[3]={5,7,11};
cout<<second[0];

cout<<endl;
//print an array
int n=3;
int array[3]={1,2,3};
for(int i=0;i<n;i++){
    cout<<array[i];
}
}