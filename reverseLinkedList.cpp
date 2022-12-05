#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void printNode(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
       cout<<endl;
        return;
}

Node* reverseLinkedList(Node* &head){
    // cout<<"RL called"<<endl;
    if(head == NULL && head->next == NULL){
        // cout<<"if"<<endl;
        return head;
    }
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    while(curr!=NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        // cout<<curr->data<<" ";
    }
    head=prev;
    return head;
}

int main(){
    Node* temp= new Node(1);
    Node* head=temp;
    Node* tail=temp;
    insertAtTail(tail,2);
    insertAtTail(tail,3);
    insertAtTail(tail,4);
    insertAtTail(tail,5);
    printNode(head);
    reverseLinkedList(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
    printNode(head);
}