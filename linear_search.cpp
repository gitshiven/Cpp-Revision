#include <iostream>
using namespace std;

bool search(int arr[], int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int num[10]={1,2,3,5,-1,7,-3};
    int key;
    cout<<"Enter the key to search for: ";
    cin>>key;
  
    bool found = search(num,10,key);
    if(found){
        cout<<key<< " is present"<<endl;
    }
    else{
        cout<<key<< " is not present"<<endl;
    }
}