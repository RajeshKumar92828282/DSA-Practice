#include <iostream>
using namespace std;
int main(){
    int arr1[5]={1,2,3,4,4};
    int arr2[5]={5,6,7,8,9};
    int merged[10];
    
    for(int i=0;i<5;i++){
        merged[i]=arr1[i];
    }
    for(int i=0;i<5;i++){
        merged[5+i]=arr2[i];
    }
    for(int i=0;i<10;i++){
        cout<<merged[i]<<" ";
    }
    return 0;
}