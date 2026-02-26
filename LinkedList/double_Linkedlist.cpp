#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* prev;
    Node* next;
void deleteNode(Node* del){
    if(head==NULL || del==NULL){
        cout<<"empty list"<<endl;
        return;
        Node* temp=head;
        head=head->next;
        delete temp;
        
    }
}
};

int main(){
    //create nodes
    Node* first=new Node();
    Node* secend=new Node();
    Node* third=new Node();
    //asign data
    first->data=10;
    secend->data=20;
    third->data=30;

    //asign next and prev
    first->prev=NULL;
    first->next=secend;
    
    secend->prev=first;
    secend->next=third;

    third->prev=secend;
    third->next=NULL;

    //print the nodes
    Node* temp=first;
    while(temp!=NULL){
        cout<<temp->data<<" <-> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    return 0;
}