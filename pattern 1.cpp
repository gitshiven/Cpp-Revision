#include <iostream>
using namespace std;

int main(){
int i=1;
int n;
// int count =1;
cin>>n;
while(i<=n){                  //for 4 rows
    int j=1;
    while(j<=i){
    cout<<(i+j)-1<< " ";
    // count = count+1;
    // cout<<count;
    j=j+1;
}
cout<<endl;
i=i+1;
}
return 0;
} 