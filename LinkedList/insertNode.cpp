#include<iostream>
using namespace std;

class Node {

public:
    int data;
    Node* next;

    Node() {
        this->next = NULL;
    }

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }




};

int getLength(Node*& head) {
    int length = 0;
    Node* temp = head;

    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }


    return length;
}

void printLL(Node*& head) {
    // always create temp pointer to travel
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtBegin(Node*& head, Node*& tail, int data) {
    if (head == NULL) {
        // that means LL is empty

        // step1 -> create new node
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;

    }
    else {
        // LL is not empty

        // create Node
        Node* newNode = new Node(data);

        // link with head
        newNode->next = head;

        // change the head
        head = newNode;
    }
}

void insertAtEnd(Node*& head, Node*& tail, int data) {
    if (tail == NULL) {
        // create a new node
        Node* newNode = new Node(data);
        tail = newNode;
        head = newNode;
    }
    else {
        // create a new node
        Node* newNode = new Node(data);
        tail->next = newNode;
        tail = newNode;
    }
}

void insertAtAny(Node*& head, Node*& tail, int pos, int data) {

    int length = getLength(head);
    if (pos <= 1) {
        insertAtBegin(head, tail, data);
        return;
    }
    else if (pos > length) {
        insertAtEnd(head, tail, data);
        return;
    }
    else {
        // with two node
        // Node* prev = NULL;
        // Node* curr = head;

        // while (position != 1) {
        //     position--;
        //     prev = curr;
        //     curr = curr->next;
        // }


        // with one node
        Node* temp = head;
        Node* newNode = new Node(data);

        //traversal for add new Node 
        while (pos != 2) {
            pos--;
            temp = temp->next;

        }

        // newNode ke next ko link karunga
        newNode->next = temp->next;

        // temp ke next ko change karunga
        temp->next = newNode;

    }
}

void deleteNode(Node* &head,Node* &tail,int position){
    int length = getLength(head);

    // LL is empty
    if(head == NULL){
        cout << "LL is empty So Can't Delete" << endl;
        return;
    }

    // only one element in LL
    if(head == tail){
        Node* temp = head;
        delete temp;
        head = NULL;
        tail = NULL;
    }

    // Delete the first Node
    if(position == 1){
        Node* temp = head;
        head = temp->next;
        temp = NULL;
        delete temp;
    }
    else if(position == length){
        // last me node delete krdo
        Node* temp = head;

        while(temp->next != tail){
            temp = temp->next;
        }

       temp->next = NULL;
       delete tail;
       tail = temp;
    }
    else{
        //node ko mid se delete kro
        Node* prev = NULL;
        Node* curr = head;

        while(position != 1){
            position--;
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }

    }



int main()
{
    // Node* first = new Node(10);
    // Node* second = new Node(20);
    // Node* third = new Node(30);
    // Node* fourth = new Node(40);
    // Node* fifth = new Node(50);

    // first->next = second;
    // second->next = third;
    // third->next = fourth;
    // fourth->next = fifth;

    // Node* head = first;
    // Node* tail = fifth;
    // printLL(head);

    // // insertAtBegin(head,tail,1);
    // // printLL(head);

    // // insertAtEnd(head,tail,60);
    // insertAtAny(head,2,25);
    // printLL(head);

    Node* head = NULL;
    Node* tail = NULL;

    insertAtEnd(head, tail, 10);
    // insertAtEnd(head, tail, 20);
    // insertAtEnd(head, tail, 30);
    // insertAtEnd(head, tail, 40);

    printLL(head);

  

    deleteNode(head, tail, 2);

    printLL(head);

    // insertAtEnd(head, tail, 10);
    // insertAtEnd(head, tail, 20);
    // insertAtEnd(head, tail, 30);
    // insertAtAny(head,tail,3,25);
    // printLL(head);








    return 0;
}