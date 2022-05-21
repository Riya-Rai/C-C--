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

    ~Node(){
        int value = this->data;

        if(this->next != NULL){
            delete next;
            this->next==NULL;
        }
        cout<<"Memory is released for node with data "<<value<<endl;
    }

};

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);

    temp->next = head;
    head = temp;
}


void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail->next;
}

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<endl;
}

void insertAtPosition(Node* &head, Node* &tail, int pos, int d){
    //if we want to insert at head
    if(pos==1){
        insertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int count = 1;

    while(count < pos-1){
        temp = temp->next;
        count++;
    }

//if we want to insert at last
    if(temp->next==NULL){
        insertAtTail(tail, d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(Node* &head, Node* &tail, int pos){
//deleting node at head
    if(pos==1){
        Node* temp = head;

        head = head->next;
        temp->next = NULL;

        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;
        int count=1;

        while(count < pos){
            prev = curr;
            curr = curr->next;
            count++;
        }

        prev->next = curr->next;

        if(curr->next == NULL){
            tail = prev;
        }

        curr->next = NULL;
        delete curr;
    }
}


int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    insertAtTail(tail, 12);
    insertAtTail(tail, 15);
    insertAtTail(tail, 20);

    insertAtPosition(head, tail, 3, 14);
    insertAtPosition(head, tail, 6, 22);

    deleteNode(head, tail , 6);
    print(head);

    cout<<"head "<<head -> data<<endl;
    cout<<"tail "<<tail -> data<<endl;

}