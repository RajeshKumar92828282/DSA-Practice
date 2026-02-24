#include <iostream>
using namespace std;
int main(){
    int a=0,b=1,c;
    while(b<=100){
        cout<<b<<endl;;
        c=a+b;
        a=b;
        b=c;


    }
    return 0;
}