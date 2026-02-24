#include <iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5,6,9,8,9,7};
    int count = 0;

    // for(int i = 0;arr[i];i++){
    //     if(arr[i] = 0) break;
    //     count++;
    // }
    for(int i:arr){
        count++;
    }
    
    cout << "Size: " << count << endl;




    return 0;

}