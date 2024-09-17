#include<iostream>
#include<vector>
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

void printLL(Node*& head) {
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;

}

int getLength(Node*& head) {
    Node* temp = head;
    int cnt = 0;

    while (temp != NULL) {
        temp = temp->next;
        cnt++;
    }
    return cnt;
    
}


void middleLL(Node*& head) {
    int len = getLength(head);
    int mid = len / 2 + 1;
    Node* temp = head;
    while (mid != 1)
    {   
        temp = temp->next;
        mid--;
    }
    cout << temp->data << endl;
    

}



int main()
{

    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    // Node* fifth = new Node(50);

    Node* head = first;


    first->next = second;
    second->next = third;
    third->next = fourth;
    // fourth->next = fifth;

    cout << "Before: ";
    printLL(head);
    middleLL(head);
    // cout << "After: ";
    // printLL(head);



    return 0;
}