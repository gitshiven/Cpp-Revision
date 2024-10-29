#include <iostream>
using namespace std;

int Sum(int arr[], int n){
        int ans=0;
      for(int i=0; i<n;i++){
        ans=ans+arr[i];
      }
   return ans;
}

int main(){
    int size;
    cout<<"enter size of array ";
    cin>>size;
    int num[1000];
    cout<<endl;
    cout<<"type values ";

    for(int i=0;i<size;i++){
        cin>>num[i];
    }
        
    cout<<Sum(num,6);
}