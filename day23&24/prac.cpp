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
int main(){
    Node* head=NULL;
    insertAtHead(head,2);
    print(head);
    insertAtHead(head,1);
    print(head);
    return 0;
}