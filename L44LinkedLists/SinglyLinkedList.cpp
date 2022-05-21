#include<iostream>
//#include<map>

using namespace std;

class Node{
    public: 
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    ~Node(){
        int value = this -> data;
        
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }

        cout<<"Memory is free for node containing the data value "<<value<<endl;
    }
};


//Inserting new node at Head
void insertAtHead(Node* &head, int d){
    //if the list is empty
    if(head==NULL){
        Node* temp = new Node(d);
        temp = head;
    }
    else{
        Node* temp = new Node(d);
        temp -> next = head;

        head = temp;
    }
}

void insertAtTail(Node* &tail, int d){
    if(tail==NULL){
        Node* temp = new Node(d);
        temp = tail;
    }
    else{
        Node* temp = new Node(d);
        tail->next = temp;
        tail = tail->next;
    }

}

void insertAtPosition(Node* &tail, Node* &head, int pos, int d){

//for inserting a node at head (1st position)
    if(pos==1){
        insertAtHead(head, d);
        return;
    }

//for inserting a node at nth position we need to traverse at (n-1)th position
    Node* temp = head;
    int count = 1;

    while(count < pos-1){
        temp = temp->next;
        count++;
    }

//for inserting a node at last position the above code works fine and will giv e correct output but we just need to update the position of tail and for that we have to use insertAtTail function to perform this insertion

if(temp->next==NULL){
    insertAtTail(tail, d);
    return;
}


//creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;


}

void print(Node* &head){
    Node* temp = head;

    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<endl;
}

void deleteNode(Node* &head, Node* &tail, int pos){
//if we want to delete a node at pos=1 i.e. head node 
    if(pos==1){
        Node* temp = head;
        head = head->next;

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
    // cout<<node1 -> data<<endl;
    // cout<<node1 -> next<<endl;

    Node* head = node1;
    Node* tail = node1;

    insertAtTail(tail, 12);
    insertAtTail(tail, 15);

    insertAtPosition(tail, head, 4, 22);

    

    

    deleteNode(head, tail , 4);
    print(head);

    cout<<"head "<<head -> data<<endl;
    cout<<"tail "<<tail -> data<<endl;

}