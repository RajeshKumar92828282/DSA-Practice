#include <iostream>
using namespace std;

int main(){
    int arr[100],n,pos,val;
cout<<"enter a size";
cin>>n;
cout<<"enter a element";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"enter a pos";
cin>>pos;
cout<<"value";
cin>>val;
for(int i=n;i>=pos;i--){
    arr[i]=arr[i-1];
}
arr[pos]=val;
n++;

for(int i=0;i<n;i++){
    cout<<arr[i];
}
}