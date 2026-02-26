#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int value){
        this->data=value;
        this->next=nullptr;
    }
};
class Linkedlist{
    private:
    Node* head;
    
    public: 
    Linkedlist(){
        this->head=nullptr;
    }
    //insert
    void insert(int data){
        Node* newnode=new Node(data);
        if(head==nullptr){
            head=newnode;
            return;
        }
        Node* temp=head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=newnode;
    }
    //print 
     
    
    void display(){
        Node* temp=head;
        while(temp!=nullptr){
            cout<<temp->data<<" -> ";
             temp=temp->next;
        }
        cout<<"NULL"<<endl;

    }



};

int main(){
    Linkedlist li;
    li.insert(10);
    li.insert(20);
    li.insert(30);
    li.display();
    return 0;
}

