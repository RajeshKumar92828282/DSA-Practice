#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,5,6,8,4};
    int min = arr[0];
    int runner=1000;

      for(int i=0;i<5;i++){
        if(arr[i]<min){
             runner=min;
             min=arr[i];
        }else if(arr[i]>min&&arr[i]<runner){
            runner=arr[i];
        }
      }


cout<<runner;

return 0;}