#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    int arr[5]={5,4,3,5,3};
    int target=9;
    unordered_map<int , int>mp;
    for(int i=0; i<5;i++){
        int need=target-arr[i];
        if(mp.find(need)!=mp.end()){
            cout<<need<<" "<<arr[i];
            return 0;

        }
        mp[arr[i]]=i;
    }
}