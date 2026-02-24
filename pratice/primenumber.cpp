#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    bool flag =0;
    cout<<"enter a number";
    cin>>n;

    if(n<=1){
        cout<<"not a prime number"<<endl;
        return 0;
        
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            flag++;
            cout<<"not a prime number"<<endl;
            break;
        }
    }
    if(flag==0){
        cout<<"prime number"<<endl;
    }
    return 0;
}