#include <iostream>
using namespace std;




void revarray(int arr[],int sz){
    int start=0,end= sz-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[]= {10,52,60,30,80};

    int sz=5;
    revarray(arr,sz);
    for(int i=0; i<sz; i++){
        cout<<arr[i]<<" ";
    }





















    // int arr[5];

    // for(int i=0; i<5; i++){
    //     cin>>arr[i];
    // }

    // for(int i=4; i>=0; i--){
    //     cout<<arr[i]<<" ";
    // }

    
 return 0;
}