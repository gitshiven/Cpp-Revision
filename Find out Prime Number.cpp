#include<iostream>
using namespace std;
int main(){
int i=2;
int n;
cin>>n;
bool isPrime=1;
for(int i=2; i<n; i++){
    if(n%i==0){
        isPrime=0;
        // cout<<n<< " is not prime";
        break;
    }
}
    if(isPrime==0){
        cout<<n<< " is not prime";
    }
    else{
        cout<<n<< " is prime";
    }

   return 0; 
}


