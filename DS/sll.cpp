#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}
void InsertAtTail(Node *&head, int d)
{
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
    }
    // now the temp contains the last node
    Node *temp2 = new Node(d);
    temp->next = temp2;
    temp = temp2->next;
}
void insertAtPosition(Node *&head, int d, int position)
{
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }
    else
    { // traversing
        Node *temp = head;
        int cnt = 0;
        while (cnt < position - 1)
        {
            temp = temp->next;
            cnt++;
        }
    }
}
int main()
{
    Node *node1 = new Node(1);
    Node *head = node1;
    Node *tail = node1;

    print(head);
    // InsertAtTail(head , 11);
    insertAtTail(tail, 12);
    print(head);
}