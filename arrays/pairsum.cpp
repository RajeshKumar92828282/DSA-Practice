#include <iostream>
#include <vector>
using namespace std;



vector<int> pairsum(vector<int>&arr,int target){
    vector<int> ans;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}


int main(){
    vector<int> arr={2,7,5,6};
    int target=13;
    vector<int> ans=pairsum(arr,target);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}