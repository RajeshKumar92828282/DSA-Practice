#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int value){
        this->data=value;
        next=NULL;
         prev=NULL;

    }
};

class Linkedlist{
     private:
     Node* head;
     public:
     Linkedlist(){
       head=NULL;
     }

      void insertbeign(int value){
        Node* newnode=new Node(value);
        if(head!=NULL){
          newnode->next=head;
          head->prev=newnode;
        }
        head=newnode;
      }
      void insertend(int value){
        Node* newnode=new Node(value);
        if(head==NULL){
          head=newnode;
          return;
        }
        Node* temp=head;
        while(temp->next!=NULL){
          temp=temp->next;
        }
        temp->next=newnode;
        newnode->prev=temp;

      }
    void deletenode(){
      if(head==NULL){
        cout<<"empty";
        return;
      }
      Node* temp=head;
     head= head->next;
      if(temp!=NULL){
        head->prev=NULL;
      }
      delete temp;

    }
    void deleteend(){
      if(head==NULL){
        cout<<"empty";
        return;
      }
      if(head->next==NULL){
        // delete head;
        head=NULL;
        return;
      }
      Node* temp=head;
      while(temp->next!=NULL){
        temp=temp->next;
      }
      temp->prev->next=NULL;
      // delete temp;
    }

      void display(){
        Node* temp=head;
        while(temp!=NULL){
          cout<<temp->data<<"<->";
          temp=temp->next;
       
        }
        cout<<"NULL"<<endl;
      }
};

int main(){
     Linkedlist l;
     l.insertbeign(20);
     l.insertbeign(60);
     l.insertbeign(80);
     l.insertbeign(60);
     l.insertbeign(10);
     l.insertend(100);
     l.insertend(110);
  cout<<"linkedlist"<<endl;
     l.display();

     l.deleteend();
     cout<<"after delete"<<endl;
     l.display();
return 0;
}

