/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };
        

*****************************************************************/

Node* reverseLinkedList(Node *head)
{
    // Write your code here
    Node * prev= nullptr;
    Node * temp= head;
    Node* front=nullptr;

    while(temp){
        front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
    } 
    return prev;
}
