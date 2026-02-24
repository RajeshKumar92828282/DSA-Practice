#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec={1,2,3,4,5};
    vec.erase(vec.begin()+1 , vec.begin()+3);
    vec.insert(vec.begin()+1, 20);

    for(int val:vec){
        cout<<val<<" ";
    }

    return 0;
}