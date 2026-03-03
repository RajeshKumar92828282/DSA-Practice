#include <iostream>
#include <vector>
using namespace std;

int removedul(vector<int>& nums){
    if(nums.empty()) return 0;
    int count=0;
    for(int j=1;j<nums.size();j++){
        if(nums[j]!=nums[count]){
            count++;
            nums[count]=nums[j];
        }
        
    }
return count+1;
}

int main(){
    vector<int> nums={0,0,1,1,1,2,2,3,3,4};
    int k= removedul(nums);
    cout<<k;
    cout<<"after remove";
    for(int i=0;i<k;i++){
        cout<<nums[i]<<" ";
    }
return 0;
}