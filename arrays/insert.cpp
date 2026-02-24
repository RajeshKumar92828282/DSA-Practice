#include <iostream>
using namespace std;

int main(){
    int arr[100] ,n,index,value;
     
    cout<<"enter a size: ";
    cin>>n;

    cout<<"enter a element: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   

    cout<<"enter a array of position: ";
    cin>>index>>value;
    for(int i=n-1;i>=index;i--){
        arr[i+1]=arr[i];
      
    }
      arr[index]=value;
        n++;
    cout<<"after sort: ";
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
    return 0;

}