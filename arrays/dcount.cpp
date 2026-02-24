#include <iostream>
using namespace std;
int main(){
    int arr[5]={4,5,5,9,9};
    int n;
    cout<<"enter a n: ";
    cin>>n;
    int count=0;
    
    for(int i=0;i<5;i++){
        if(arr[i]==n){
            count++;
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}