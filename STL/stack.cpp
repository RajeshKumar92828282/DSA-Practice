#include <iostream>
#include <stack>
using namespace std;

int main(){
   stack<int> s ;
   s.push(10);
    s.push(20); 
    s.push(30);
   stack<int> s1;
   s1.swap(s);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }

    cout<<"top element: "<<s.top()<<endl;

 cout<<"size of stack: "<<s.size()<<endl;
    cout<<s1.size()<<endl;





    return 0;

}