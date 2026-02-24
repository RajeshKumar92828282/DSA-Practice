#include <iostream>
#include <vector>
using namespace std;

int main(){
   vector<int> vec= {10,20,30,50,60};

   vector<int>::iterator it;
   for(auto it=vec.rbegin(); it!=vec.rend(); it++){
    cout<<*(it)<<" ";
   }


    return 0; 
}