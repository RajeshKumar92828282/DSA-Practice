#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main (){
    string num;
    cout<<"enter a number:";
    cin>>num;

    string rev=num;
    reverse(rev.begin(),rev.end());
    cout<<"reversed number is:"<<rev;
    return 0;


    

}