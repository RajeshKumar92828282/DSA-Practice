#include <iostream>
using namespace std;

int main(){

    int arr[100],n,x,i;
    cout<<"enter a size of array: ";
    cin>>n;
    cout<<"enter a element";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter a search element: ";
    cin>>x;
    for(i=0;i<n;i++){
        if(arr[i]==x){
            cout<<"element found at index "<<i<<endl;
            break;
        }
    }
    if(i==n){
        cout<<"element not found"<<endl;
}
return 0;

}