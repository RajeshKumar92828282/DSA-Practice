#include <iostream>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;

};
int main(){
    // create head
    Node* head=NULL;
    // create new node
    Node* first=new Node();
    first->data=10;
    first->next=NULL;
    head=first;
    // create secend node
    Node* secend=new Node();
    secend->data=20;
    secend->next=NULL;
    first->next=secend;
    // create third node
    Node* third=new Node();
    third->data=30;
    third->next=NULL;
    secend->next=third;
    //print the nodes
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;

return 0;

}