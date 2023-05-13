#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    // construtor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insert_at_any(Node *&head, int position, int d)
{
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    Node *Nodetoinsert = new Node(d);
    Nodetoinsert->next = temp->next;
    temp->next = Nodetoinsert;
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
        // cout << temp->next << endl;
    }
    cout << endl;
}
int main()
{
    Node *node1 = new Node(10);
    // Node *node2 = new Node(15);

    Node *head = node1;
    // Node *tail = node2;
    insert_at_any(head, 1, 12);
    insert_at_any(head, 2, 15);

    print(head);

    return 0;
}
