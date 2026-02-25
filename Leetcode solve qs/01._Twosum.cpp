#include <iostream>
#include <vector>
using namespace std;

class Sol{
    public:
    vector<int> twosum(vector<int>&nums,int target){
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
        return {};
    }
    
};
int main(){
    Sol s;
    vector<int>nums={2,7,11,15};
    int target=13;
    vector<int> result=s.twosum(nums,target);
    if(!result.empty()){
        cout<<result[0]<<" "<<result[1]<<endl;
    }else{
        cout<<"no solution found\n";
    }
    return 0;
}