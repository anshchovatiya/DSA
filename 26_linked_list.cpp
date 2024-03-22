#include <iostream>

using namespace std;

class Node
{
public:
    int number;
    Node *next;

    Node(int number)
    {
        this->number = number;
        this->next = NULL;
    }
};

void print_link_list(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->number << " ";
        ptr = ptr->next;
    }
}

void Insert(Node *&Head, int num)
{
    Node *temp = new Node(num);
    temp->next = Head;
    Head = temp;
}

int main()
{
    Node *first = new Node(1);

    Insert(first, 38);


    print_link_list(first);

    return 0;
}