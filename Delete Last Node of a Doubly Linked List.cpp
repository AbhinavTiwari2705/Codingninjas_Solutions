/**
 * Definition of doubly linked list:
 *
 * struct Node {
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() : data(0), prev(nullptr), next(nullptr) {}
 *      Node(int val) : data(val), prev(nullptr), next(nullptr) {}
 *      Node(int val, Node *p, Node *n) : data(val), prev(p), next(n) {}
 * };
 *
 *************************************************************************/

Node * deleteLastNode(Node *head) {

    if(!head->next) return nullptr;
    // Write your code here
    Node* temp=head;
    while(head->next!=NULL){
        head=head->next;
        
    }
    head->prev->next=nullptr;
    free(head);
    return temp;
}
