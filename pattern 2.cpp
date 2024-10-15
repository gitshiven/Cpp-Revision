#include<iostream>
using namespace std;
int main(){
    int row=1;
    int n;
    cin>>n;
    while(row<=n){
        int col=1;
        // char star ='*';
        char star = 'A'+n-row;
        while(col<=n){
        cout<<star;
        col=col+1;
        }
        cout<<endl;
        row=row+1;

    }
}