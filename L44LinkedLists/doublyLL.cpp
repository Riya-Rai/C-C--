#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d){
        this->data = d;
        this->next = NULL;
    }


    ~Node(){
        int  value = this->data;
        if(next != NULL){
            delete next;
            this->next = NULL;
        }

        cout<<"Memory free for node with data "<<value<<endl;
    }

    
};

//getting a length of a linkedlist
int getLength(Node* &head){

    Node* temp = head;
    int length = 0;

    while(temp != NULL){
        length++;
        temp = temp->next;
    }

return length;

}

//traversing a linkedlist
void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<endl;
}

void insertAtHead(Node* &head, Node* &tail, int d){

    if(head==NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);

        temp->next = head;
        head->prev = temp;
        head = temp;
    }

}

void insertAtTail(Node* &tail, Node* &head, int d){

    if(tail==NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
        Node* temp = new Node(d);

        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
 

}

void insertAtPosition(Node* &head, Node* &tail, int pos, int d){
    if(pos==1){
        insertAtHead(head, tail, d);
        return;
    }

    Node* temp = head;
    int count=1;

    while(count<pos-1){
        temp = temp->next;
        count++;
    }

    if(temp->next==NULL){
        insertAtTail(tail, head, d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deleteNode(Node* &head, Node* &tail, int pos){
//if we want to delete a node at pos=1 i.e. head node 
    if(pos==1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
//ab jo 1st node bcha use delete bhi krna hoga but befor deleting we have to detach it's next valur from next node
        temp->next=NULL;
//deleting the node
        delete temp;

    }
    else{

        Node* curr = head;
        Node* prev = NULL;

        int count=1;

        while(count<pos){
            prev = curr;
            curr = curr->next;
            count++;
        }

        curr->prev = NULL;
        prev->next = curr->next;

        if(curr->next == NULL){
            tail = prev;
        }

        curr->next = NULL;
        delete curr;
    }
}


int main(){
    //Node* node1 = new Node(10);

    Node* head = NULL;
    Node* tail = NULL;

    print(head);

    cout<<getLength(head)<<endl;


    insertAtHead(head, tail, 11);
    print(head);

    insertAtHead(head, tail, 13);
    print(head);

    insertAtHead(head, tail, 8);
    print(head);

    insertAtTail(tail, head, 25);
    print(head);

    insertAtPosition(head, tail, 2, 100);
    print(head);

    insertAtPosition(head, tail, 1, 101);
    print(head);

    insertAtPosition(head, tail, 7, 102);
    print(head);

    deleteNode(head, tail, 7);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
}