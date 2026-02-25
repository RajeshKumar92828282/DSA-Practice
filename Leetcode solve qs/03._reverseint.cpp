#include <iostream>
#include <climits>
using namespace std;

class sol{
    public: 
    rev(int x){
        long long rev=0;
        while(x!=0){
            int digit=x%10;
            rev=rev*10+digit;
            x=x/10;

        }
        if(rev>INT_MAX||rev<INT_MIN){
            return 0;
        }
        return (int)rev;
    }
};
int main(){
    sol s;
    int x=123;
    int result=s.rev(x);
    cout<<result<<endl;
    return 0;
}