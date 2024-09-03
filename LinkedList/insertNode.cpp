#include<iostream>
using namespace std;

class Node{

    public:
        int data;
        Node* next;

        Node(){
            this-> next = NULL;
        } 

        Node(int data){
            this->data = data;
            this-> next = NULL;
        }

       


};

void printLL(Node*& head) {
    // always create temp pointer to travel
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtBegin(Node* &head,Node* &tail,int data){
    if(head == NULL){
        // that means LL is empty

        // step1 -> create new node
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;

    }
    else{
        // LL is not empty

        // create Node
        Node* newNode = new Node(data);

        // link with head
        newNode->next = head;

        // change the head
        head = newNode;
    }
}

void insertAtEnd(Node* &head,Node* &tail,int data){
    if(tail == NULL){
        // create a new node
        Node* newNode = new Node(data);
        tail = newNode;
        head = newNode;
    }
    else{
        // create a new node
        Node* newNode = new Node(data);
        tail->next = newNode;
        tail = newNode;
    }
}


int main()
{
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    Node* head = first;
    Node* tail = fifth;
    printLL(head);

    insertAtBegin(head,tail,1);
    printLL(head);

    insertAtEnd(head,tail)

 return 0;
}