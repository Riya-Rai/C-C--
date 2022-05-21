#include<iostream>
using namespace std;

class Node{
    public: 
    int data;
    Node* next;

    //contructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;

        if(this->next != NULL){
            delete next;
            this->next=NULL;
        }

        cout<<"Memory is removed for node containing data "<<value<<endl;
    }
};

void insertNode(Node* &tail, int element, int d){
//assuming that the element is present in the list

    //empty list
    if(tail==NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        //non-empty list
        //assuming that the element is present in the list

        Node* curr = tail;

        while(curr->data != element){
            curr = curr -> next;
        }

        //found the element, curr is representing the element vala node
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
        
    }
}

void print(Node* tail){

    Node* temp = tail;

   //if the list is emptied
    if(tail==NULL){
        cout<<"List is Empty "<<endl;
        return;
    }

    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }while(tail != temp);

    //cout<<tail->data<<" ";

    cout<<endl;
}

void deleteNode(Node* &tail, int value){
    //empty list
    if(tail == NULL){
        cout<<"List is already empty, please check once again!"<<endl;
        return;
    }
    else{
        //non empty list
        //assuming that value is present in the linked list

        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data != value){
            prev = curr;
            curr= curr->next;
        }
        
        prev->next = curr->next;

    // 1-node linked list
        if(curr==prev){
            tail=NULL;
        }
    //>=2-node linked list
        else if(tail == curr){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

int main(){

    Node* tail = NULL;

//inserting in an empty list here the element has no role because we have provided conditon for empty list in insertNode function
    insertNode(tail , 5, 3);
    print(tail);
 
    insertNode(tail , 3, 4);
    print(tail);

    insertNode(tail , 4, 5);
    print(tail);

    insertNode(tail , 5, 6);

    insertNode(tail , 4, 7);
    print(tail);

    insertNode(tail, 3, 10);
    print(tail);
    //cout<<"tail "<<tail->data<<endl;


    deleteNode(tail , 3);
    print(tail);

    return 0;
}