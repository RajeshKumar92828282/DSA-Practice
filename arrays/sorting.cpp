#include <iostream>
using namespace std;

int main(){
    int arr[100],temp,size;
    cout<<"enter a size of array: ";
    cin>>size;
    cout<<"enter a element: ";
    for(int i =0; i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){

            if(arr[i]>arr[j]){
           temp= arr[i];
            arr[i]=arr[j];
           arr[j]=temp;

            }
        
        }
    }



   cout<<"sorted array";

    for(int i=0;i<size;i++){
      cout<<arr[i]<<" ";
    }
    return 0;
}
