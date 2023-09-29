#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int value) : data(value), next(nullptr) {}
};
class LinkedList
{
public:
    Node *head;
    int size;

    LinkedList() : head(nullptr), size(0) {}

    void insertAtHead(int value)
    {
        Node *newNode = new Node(value);
        newNode->next = head;
        head = newNode;
        size++;
    }
    void deleteAtHead()
    {
        if (head == nullptr)
        {
            return; // Nothing to delete
        }
        Node *temp = head;
        head = head->next;
        delete temp;
        size--;
    }
    void deleteAt(int index)
    {
        if (index < 0 || index >= size)
        {
            return; // Invalid index
        }
        if (index == 0)
        {
            deleteAtHead();
            return;
        }
        Node *current = head;
        for (int i = 0; i < index - 1; i++)
        {
            current = current->next;
        }
        Node *temp = current->next;
        current->next = temp->next;
        delete temp;
        size--;
    }
    void display()
    {
        Node *current = head;
        while (current != nullptr)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};
int main()
{
    LinkedList list;
    list.insertAtHead(200);
    list.insertAtHead(100);
    list.insertAtHead(30);
    list.insertAtHead(20);
    list.insertAtHead(10);
    cout << "Linked-list size: " << list.size << endl;
    cout << "Elements of linked-list: ";
    list.display();
    list.deleteAtHead();
    cout << "Deleted first element, new size: " << list.size << endl;
    cout << "Updated linked-list: ";
    list.display();
    int mid = list.size / 2 + (list.size % 2 != 0);
    list.deleteAt(mid - 1);
    cout << "Deleted middle element, new size: " << list.size << endl;
    cout << "Updated linked-list: ";
    list.display();
    list.deleteAt(list.size - 1);
    cout << "Deleted last element, new size: " << list.size << endl;
    cout << "Updated linked-list: ";
    list.display();
    return 0;
}