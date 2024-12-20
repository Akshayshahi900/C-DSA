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
void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}
void insertAtPostion(Node *&tail, Node *&head, int position, int d)
{
    // if insertion is at head;
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // insertion at end of the list
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    // create a new node
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}
void deleteNode(int position, Node *&head)
{
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        //memory free start node
        temp -> next = NULL;
        delete temp;

    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while(cnt <= position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev ->next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}
int main()
{ // create a new node
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    // cout << Node1->data << endl;
    // cout << Node1->next << endl;
    // head pointed to node1
    print(head);
    // insertAtHead(head, 12);
    insertAtTail(tail, 12);

    print(head);
    insertAtTail(tail, 13);

    print(head);
    insertAtTail(tail, 14);

    print(head);
    insertAtPostion(tail, head, 5, 22);
    print(head);
    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;
}

