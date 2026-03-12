#include <iostream>
using namespace std;

class Node{
    public: 
    int data;
    Node* next;
    Node(int data){
         this->data=data;
         this->next=NULL;
    }
};

class circular{
    private:
    Node* tail;
    public:
    circular(){
        tail=NULL;
    }
    void insertbegin(int data){
             Node* newnode=new Node(data);
             if(tail==NULL){
                tail=newnode;
                tail->next=tail;
             }else{
                newnode->next=tail->next;
                tail->next=newnode;
             }
    }
    void display(){
        if(tail==NULL){
            cout<<"empty";
            return;
        }
        Node* temp=tail->next;
       do{
        cout<<temp->data<<"->";
        temp=temp->next;
             
       }while(temp!=tail->next);
           cout<<"NULL"<<endl;
       
    }
};



int main(){
    
    circular c;
    c.insertbegin(20);
     c.insertbegin(30);
      c.insertbegin(40);
       c.insertbegin(50);
        c.insertbegin(90);

        c.display();
        return 0;
}