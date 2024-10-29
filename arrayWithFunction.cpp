#include <iostream>
using namespace std;

void printarray( int arr[], int size){
    for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
cout<<"printing DONE"<<endl;
}



int main(){
    int num[15]={2,7};
    printarray(num,15);

    int fourth[20]={1,2,4,5,5,3,1,5,15};
    printarray(fourth,20);

 char ch[]={'a','b','c','r','p'};
 for(int i=0;i<5;i++){
    cout<<ch[i]<<" ";
}

}