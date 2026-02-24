#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec = {10, 20, 30, 40, 50};
    vector<int> vec2(5, 0); // vector of size 5 initialized with 0
     vec.push_back(90);
     vec.emplace_back(100);
    vec.push_back(20);
    vec.push_back(30);   
    for(int val: vec2){
        cout<<val<<" ";
        
    }

    // cout<<vec.front()<<endl;
    // cout<<vec.back()<<endl;
return 0;
}