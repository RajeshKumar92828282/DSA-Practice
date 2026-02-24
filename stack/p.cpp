#include <iostream>
using namespace std;
#define MAX 5
int stackarr[MAX];
int top =-1;


void push(int x){
    if(top==MAX-1){
        cout<<"stack overflow\n";

    }else{
        top++;
        stackarr[top]=x;
    }
}

void pop(){
    if(top==-1){
        cout<<"stack overflow\n";
    }else{
        cout<<"pop"<<stackarr[top]<<endl;
        top--;
    }
}
void display(){
    if(top==-1){
        cout<<"stack empty\n";
        return;
    }
    for(int i=top;i>=0;i--){
        cout<<stackarr[i]<<" ";
        cout<<endl;
    }
}
int main(){
    push(10);
    push(20);
    push(30);

    display();
    pop();
    display();
}