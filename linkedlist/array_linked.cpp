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
    public:
  

};
   Node* convertArrayLL(vector<int>&arr){
       Node* head = new Node(arr[0]);
       Node* mover = head;
       for (int i =1;i<arr.size();i++) {
             Node * temp = new Node(arr[i]);
             mover->next = temp;
             mover = temp;
       }
       return head;

     }

int main() {
    
    Node* y = new Node(5);
    // cout<<y->data;
  
    vector<int> arr = {1,2,3,4,56};
    Node* h = convertArrayLL(arr);
    cout<<"Head "<<h->data<<"head next "<<h->next->data;
     return 0;



}