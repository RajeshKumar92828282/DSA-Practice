#include <iostream>
using namespace std;
int main(){
    int arr[9]={1,2,1,3,5,4,4,0,0};
    for(int i =0; i<9; i++){
        for(int j=i+1; j<9; j++){
            if(arr[i] == arr[j]){
                cout<<"duolicate elelment is:"<<arr[i]<<endl;
            }
        }
    }
return 0;
}