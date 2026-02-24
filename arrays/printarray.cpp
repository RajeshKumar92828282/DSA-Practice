#include <iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40};
    int n=4;
    int min=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>min){
            min=arr[i];
            

          
        }
    }
  
    cout<<min<<endl;
    return 0;

}