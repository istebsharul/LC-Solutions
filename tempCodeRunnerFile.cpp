#include<bits/stdc++.h>
using namespace std;


class Node
{
public:
    int data;
    Node *next; 

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int data)
{
    // node created
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int data)
{   
    cout<<"HI"<<endl;
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

int countNode(Node* &head){
    int count=0;
    Node *temp= head;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    return count;
}

void printNode(Node* &head){
    Node *temp= head;
    while(temp != NULL){
        // cout<<"while is running"<<endl;
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    return;
}



int main(){
    Node *temp = new Node(1);
    Node *head = temp;
    // Node *temp;
    
    insertAtTail(temp,5);
    cout<<countNode(head);
    printNode(head);
    return 0;
}

