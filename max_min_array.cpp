#include <iostream>
using namespace std;

int getMax(int arr[], int size){

int max= INT_MIN;
for(int i=0; i<size; i++){
    if(arr[i]>max){                                    
        max=arr[i];                                  
    }
}
return max;


}

int getMin(int arr[], int size){
    int min = INT_MAX;
    for(int i=0; i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;

}

int main(){
    int num[6]={2,4,1,5,7,8};
    /*int max_value=getMax(num,6);
    int min_value=getMin(num,6);
    cout<<max_value<<" "<<min_value;*/
    cout<<getMax(num,6)<<" "<<getMin(num,6);

}