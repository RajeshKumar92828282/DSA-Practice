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
    void insertBegin(int data){
        Node* newnode=new Node(data);
        newnode->next=head;
        head=newnode;

    }
    void insertend(int data){
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
    // insert any postion
    void anypos(int data,int pos){
        Node* newnode=new Node(data);
        if(pos==1){
            newnode->next=head;
            head=newnode;
            return;
        }
        Node* temp=head;
        int count=1;
        while(temp!=NULL && count<pos-1 ){
            temp=temp->next;
            count++;
        }
        if(temp==NULL){
            cout<<"position out of range"<<endl;
            delete newnode;
            return;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
    // delete
   void deletebegin(){
    if(head==NULL){
        cout<<"empty list";
        return;
    }
    Node* temp=head;
    head=head->next;
    delete temp;
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

     li.insertend(22);

    li.insertBegin(10);
      li.insertBegin(20);
        li.insertBegin(30);
          li.insertBegin(40);

         
          li.insertend(26);
          li.insertend(27);
   

    // li.anypos(10,1);
    // li.anypos(20,2);
    // li.anypos(30,2);
    // li.anypos(40,1);
    // li.anypos(50,5);
  li.deletebegin();
 
    li.display();
    return 0;
}

