#include <iostream>
#include <map>
using namespace std;

int main(){
   map<string, int>m;
   m["car"]=1100;
   m["bike"]=200;   


   for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
   }
    return 0;
}