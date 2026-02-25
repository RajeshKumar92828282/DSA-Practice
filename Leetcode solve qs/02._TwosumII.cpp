#include <iostream>
#include <vector>
using namespace std;
class sol{
    public:
    vector<int> twosum(vector<int>&numbers,int target){
        int left=0;
        int right=numbers.size()-1;
        while(left<right){
            int sum=numbers[right]+numbers[left];
            if(sum==target){
                return {left+1,right+1};

            }else if(sum>target){
                right--;
            }else{
                left++;
            }
        }
        return {};
    }
};

int main(){
    sol s;
    vector<int>numbers={2,7,11,15};
    int target=9;
    vector<int> result=s.twosum(numbers,target);
    if(!result.empty()){
        cout<<result[0]<<" "<<result[1]<<endl;
    }else{
        cout<<"no solution found\n";
    }
    return 0;
}