#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int value){
        this->data=value;
        this->next=NULL;
    }

};

class Linkedlist{
    private:
    Node* head;
    public:
    Linkedlist(){
        this->head=NULL;

    }
    //insert
    void insert(int data){
        Node* newnode=new Node(data);
        if(head==NULL){
            head=newnode;
            return;
        }
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
    // print
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
    }
};

int main(){
    Linkedlist li;
    li.insert(10);
     li.insert(20);
      li.insert(30);
       li.insert(10);
        li.insert(10);
    li.display();
    return 0;


}