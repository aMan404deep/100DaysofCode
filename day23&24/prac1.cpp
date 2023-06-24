#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node(int data){
        val=data;
        next=NULL;
    }
};

void insertAtHead(Node* &head,int val ){
    Node* new_node = new Node(val);
    new_node->next=head;
    head=new_node;
}
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->"<<endl;
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void insertAtTail(Node* &head,int val){
    Node* new_node = new Node(val);
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_node;
}
void insertAtPosition(Node* &head,int val,int pos){
    if(pos==0){
        insertAtHead(head, val);
        return;
    }
    Node* new_node = new Node(val);
    Node* temp=head;
    int current_pos = 0;
    while(current_pos!=pos-1){
       temp=temp->next;
       current_pos++;
    }
    new_node->next= temp->next;
    temp->next=new_node;
}
int main(){
    Node* head=NULL;
    insertAtHead(head,2);
    print(head);
    insertAtHead(head,1);
    print(head);
    insertAtTail(head,3);
    print(head);
    insertAtPosition(head,4,2);
    print(head);
    return 0;
}