#include <iostream>
using namespace std;
int main(){
    int arr[5]={2,5,4,6,8};

      int max =arr[0];
      int runner=-1000;
     for(int i=0;i<5;i++){
        if(arr[i]>max){
            runner=max;
            max=arr[i];
        }else if(arr[i]<max&&arr[i]>runner){
            runner=arr[i];
        }
     }
     cout<<"runner is: "<<runner;
    return 0;
}