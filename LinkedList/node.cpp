#include<iostream>
using namespace std;
class Node{
  public:
    int data;
    Node* next;
    int countNodes;

    Node(){
        this-> next = NULL;
        this->countNodes = 0;
    }
    Node(int data) {    
       this-> data = data;
       this-> next = NULL;
    }
    
    void printLL(Node* head){
        // ham kabhi bhi actual ptr ko use nahi karenge for traversal the node
        // we can create the temp ptr
        Node* temp = head;

        while (temp  != NULL) {
          
            cout << temp->data << "->" ;
            temp = temp->next;//->next->next->next;
            
        
        }
    }
    void printLength(Node* head){
        Node* temp = head;
        countNodes = 0;

        while(temp != NULL){
            countNodes++;
            temp = temp->next;
        }
        cout <<endl<< countNodes ;
    }
};
int main()
{
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);

    // link current node to next node 
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    Node* head = first;
    head->printLL(head);

    head->printLength(head);
    
    

 return 0;
}