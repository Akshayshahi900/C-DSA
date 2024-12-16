#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insertAtHead(Node *&head, int d)
{
    // new node create
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
};
void print(Node *&head)
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{ // create a new node
    Node *node1 = new Node(10);
    Node *head = node1;
    // cout << Node1->data << endl;
    // cout << Node1->next << endl;
    // head pointed to node1
    print(head);
    insertAtHead(head, 12);

    print(head);
    insertAtHead(head, 13);

    print(head);
    insertAtHead(head, 14);

    print(head);
}
