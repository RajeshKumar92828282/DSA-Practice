#include <iostream>
using namespace std;

int main(){
    int arr[4]={4,5,5,4};
    bool palindrome=true;
    for(int i=0;i<4/2;i++){
        if(arr[i]!=arr[4-i-1]){
            palindrome=false;
            break;
        }
    }
    if(palindrome){
        cout<<"palindrome";
    }else{
        cout<<"not palindrome";
    }
    return 0;
}