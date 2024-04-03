#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *previous;
    struct Node *next;
};

struct Node *Head = NULL;

void Insert_back(int number)
{

    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = number;

    if (Head == NULL)
    {
        Head = temp;
        temp->next = Head;
    }
    else
    {
        struct Node *ptr = Head;

        while (ptr->next != Head)
        {
            ptr = ptr->next;
        }

        ptr->next = temp;
        temp->previous = ptr;
        temp->next = Head;
        Head->previous = temp;
    }
}

void Print_list()
{

    struct Node *ptr = Head;
    printf("\n");
    if (Head == NULL)
    {
        printf("list is empty\n\n");
    }

    else
    {

        while (ptr->next != Head)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
        printf("%d ", ptr->data);

        printf("\n\n");
    }
}

void Delete_back()
{

    struct Node *ptr = Head;
    struct Node *p = NULL;

    while (ptr->next != Head)
    {
        p = ptr;
        ptr = ptr->next;
    }

    p->next = Head;
    Head->previous = p;
    free(ptr);
}

void Insert_front(int number)
{

    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = number;

    if (Head == NULL)
    {
        Head = temp;
        temp->next = Head;
    }
    else
    {

        struct Node *ptr = Head;

        while (ptr->next != Head)
        {
            ptr = ptr->next;
        }

        ptr->next = temp;

        temp->next = Head;
        Head->previous = temp;
        Head = temp;
    }
}

void Delete_front()
{
    if (Head == NULL)
    {
        printf("List is Empty");
    }
    else
    {
        if (Head->next == Head)
        {
            Head = NULL;
            return;
        }
        else
        {
            struct Node *ptr = Head;

            while (ptr->next != Head)
            {
                ptr = ptr->next;
            }

            struct Node *p = Head;
            Head = Head->next;
            ptr->next = Head;
            Head->previous = ptr;
            free(p);
        }
    }
}

void Insert_middle(int number, int position)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = number;

    struct Node *ptr = Head;

    while (ptr->data != position && ptr->next != Head)
    {
        ptr = ptr->next;
    }

    struct Node *p = ptr->next;

    ptr->next = temp;
    p->previous = temp;
    temp->previous = ptr;
    temp->next = p;
}

void Delete_mid(int position)
{
    struct Node *ptr = Head;

    while (ptr->data != position && ptr->next != Head)
    {
        ptr = ptr->next;
    }

    if (ptr == Head)
    {
        struct Node *ptr = Head;

        while (ptr->next != Head)
        {
            ptr = ptr->next;
        }

        struct Node*p = Head;
        Head = Head->next;
        Head->previous=ptr;
        ptr->next=Head;
        free(p);
        return;
    }

    struct Node *p = ptr;
    ptr->previous->next = ptr->next;
    ptr->next->previous = ptr->previous;
    free(p);
}

int main()
{
    Insert_back(1);
    Insert_back(2);
    Insert_back(3);
    Insert_back(4);
    Insert_back(5);
    Print_list();

    Delete_mid(5);
    Print_list();
    Delete_mid(1);
    Print_list();
    Delete_mid(2);
    Print_list();
}