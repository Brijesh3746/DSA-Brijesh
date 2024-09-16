#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node() {
        this->prev = NULL;
        this->next = NULL;
    }

    Node(int data) {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void printLL(Node*& head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

int getLength(Node*& head) {
    int len = 0;
    Node* temp = head;

    while (temp != NULL) {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtBegin(Node*& head, Node*& tail, int data) {
    Node* temp = head;

    // LL is empty
    if (head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else {
        // LL is not empty
        Node* newNode = new Node(data);
        newNode->next = head;
        head->prev = newNode;
        head = newNode; //other is head = head -> prev;

    }
}

void insertAtEnd(Node*& head, Node*& tail, int data) {
    // LL is empty
    if (tail == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;

    }
    else {
        // LL is NOT empty
        Node* newNode = new Node(data);

        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;

    }
}

void insertAtPosition(Node* &head ,Node* &tail,int data ,int position){
    int length = getLength(head);
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else if(position == 1){
        insertAtBegin(head, tail, data);
    }
    else if(position == length+1){
        insertAtEnd(head,tail,data);
    }
    else{
        Node* newNode = new Node(data);

        Node* currNode = head;
        Node* prevNode = NULL;

        while(position != 1){
            position--;
            prevNode = currNode;
            currNode = currNode -> next;
        }

        newNode->next = currNode;
        currNode->prev = newNode;
        prevNode->next = newNode;
        newNode->prev = prevNode;
    }

}

void deleteAtPosition(Node* &head,Node* &tail,int position){
    int length = getLength(head);
    if(head == NULL){
        cout<<"List is empty"<<endl;
        return;
    }

    if (head == tail) {
        Node* temp = head;
        delete temp;
        head = NULL;
        tail = NULL;
    }
    else if(position == 1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        head->prev = NULL;
        delete temp;
    }
    else if(position == length){
        Node* prevNode = tail->prev;
        prevNode->next = NULL;
        tail->prev = NULL;
        delete tail;
        tail = prevNode;
    }
    else{
        Node* currNode = head;
        Node* prevNode = NULL;
        while(position != 1){
            position--;
            prevNode = currNode;
            currNode = currNode->next;
        }
        prevNode->next = currNode->next;
        currNode->next->prev = prevNode;
        currNode->next = NULL;
        currNode->prev = NULL;
        delete currNode;
    }

}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    // insertAtBegin(head, tail, 10);
    // insertAtBegin(head, tail, 20);
    // insertAtBegin(head, tail, 30);

    insertAtEnd(head, tail, 10);
    insertAtEnd(head, tail, 20);
    insertAtEnd(head, tail, 30);



    printLL(head);
    // insertAtPosition(head,tail,1000,3);
    deleteAtPosition(head,tail,2);
    printLL(head);

    deleteAtPosition(head, tail, 2);
    printLL(head);

    deleteAtPosition(head, tail, 1);
    printLL(head);
    cout << "Length Of LL is: " << getLength(head) << endl;
    
    deleteAtPosition(head, tail, 1);
    printLL(head);

    return 0;
}