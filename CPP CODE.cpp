#include<iostream>
using namespace std;
int main(){
int a=0;
int b=1;
int n =10;
// int nexNum = a+b;
cout<<a<<b;
for(int i=0; i<=n; i++){
    int nexNum = a+b;
    cout<<nexNum;
      a=b;
      b=nexNum;
}
return 0;

}

//Output
//01123581321345589144
