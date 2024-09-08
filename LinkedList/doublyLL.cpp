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

    return 0;
}