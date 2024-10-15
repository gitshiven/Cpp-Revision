#include<iostream>
using namespace std;
int main(){
    int n;
    int row=1;
    cin>>n;
    while(row<=n){
        int space = n-row;
        while(space){
            cout<<" ";
            space=space-1;
        }   
        int j=1;
        while(j<=row){
        cout<<j;
        j=j+1;
    }
    int start=row-1;
    while(start){
        cout<<start;
        start=start-1;
    }
    cout<<endl;
    row=row+1;
}
}