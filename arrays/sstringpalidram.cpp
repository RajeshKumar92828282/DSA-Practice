#include <iostream>
#include <string>
using namespace std;


int main(){
 string s="level";
  int n= s.length();
  bool palindrome=true;

  for(int i=0;i<n/2;i++){
    if(s[i]!=s[n-i-1]){
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