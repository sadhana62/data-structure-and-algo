#include<iostream>
#include<vector>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    public:
    Node(int x) {
        this->data = x;
        this->next = nullptr;
    }

};

class linkedList {
    Node* head;
    Node* tail;
    public:
    linkedList() {
        head =  nullptr;
        tail = nullptr;
    }
   
    void insertAtHead(int ele) {
      if (head == nullptr) {
        head =  new Node(ele);
        tail = head->next;
      } else {
        Node *temp;
        temp = head;
        tail = temp->next;
        head = new Node(ele);
        head->next = temp;
      }
    }
    void insertAtEnd(int ele) {
        if (head == nullptr){
            head =  new Node(ele);
            tail = head->next;
        } else {
            Node* temp = head;
            while(temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = new Node(ele);
            tail = temp;
        }
    }
    void traverse() {
          Node* temp = head;
            while(temp != nullptr) {
                cout<<temp->data<<" ";
                temp = temp->next;
            }
    }
};
   


int main() {
    
    linkedList* ll = new linkedList();
    ll->insertAtEnd(1);
    ll->insertAtEnd(2);
    ll->insertAtEnd(3);
    ll->insertAtHead(4);
    ll->insertAtHead(5);
    ll->traverse();
   
    return 0;



}