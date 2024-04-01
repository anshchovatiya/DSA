#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *Head = NULL;

// this is a function to insert value at back part of the list
void Insert_back(int number)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = number;
    temp->next = NULL;

    if (Head == NULL)
    {
        Head = temp;
    }
    else
    {
        struct Node *ptr = Head;

        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }

        ptr->next = temp;
    }
}

void print_list()
{
    if (Head == NULL)
    {
        printf("\nList is Empty!\n\n");
        return;
    }

    struct Node *temp = Head;
    printf("\n");

    while (temp != NULL)
    {
        printf("%d  ", temp->data);
        temp = temp->next;
    }
    printf("\n\n");
}

void delete_back()
{
    struct Node *ptr = Head;
    struct Node *p;

    if (Head == NULL)
    {
        printf("\nList is Empty!\n\n");
        return;
    }

    if (Head->next == NULL)
    {
        Head = NULL;
        free(ptr);
        return;
    }

    while (ptr->next != NULL)
    {
        p = ptr;
        ptr = ptr->next;
    }

    p->next = NULL;
    free(ptr);
    return;
}

void Insert_mid(int number, int position)
{
    struct Node *ptr = Head;
    while (ptr->data != position)
    {
        ptr = ptr->next;
    }
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = number;
    temp->next = ptr->next;
    ptr->next = temp;
    
}

void Insert_front(int number)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = number;
    temp->next = Head;
    Head = temp;
}

void delete_front()
{
    struct Node *ptr = Head;
    Head = Head->next;
    free(ptr);
}

void delet_mid(int position)
{
    struct Node *ptr = Head;
    while (ptr->next->data != position)
    {
        ptr = ptr->next;
    }

    ptr->next = ptr->next->next;
}

int main()
{

    Insert_front(52);
    Insert_front(962);
    Insert_front(15);
    Insert_front(52);
    Insert_front(62);
    Insert_front(75);
    Insert_front(91);
    Insert_front(98);
    print_list();


    // delet_mid(62);

    print_list();

    return 0;
}
