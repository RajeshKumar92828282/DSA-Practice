#include <iostream>
using namespace std;
int main(){
    int arr[]={5,5,6,2,9,5,8};
    int n=7;
    int min=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>min){
            min=arr[i];
            cout<<"minimum element is: "<<min<<endl;
        }
    }
    return 0;
}