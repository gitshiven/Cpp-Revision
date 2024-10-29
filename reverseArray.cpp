#include <iostream>
using namespace std;

void reversearray(int arr[], int n){
    int start = 0;
    int end = n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;  


    }
}

void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
        cout<<endl;
}

int main(){
    int arr[6]={1,2,3,4,5,6};
    int brr[6]={0,9,8,7,6,5};

    reversearray(arr,6);
    reversearray(brr,6);
    printArray(arr,6);
    printArray(brr,6);

//    reversearray(arr,6);
//     reversearray(brr,6);
return 0;

}