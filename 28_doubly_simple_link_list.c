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
    temp->next = NULL;
    temp->previous = NULL;

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
        temp->previous = ptr;
    }
}

void print_list()
{

    struct Node *ptr = Head;
    printf("\n");
    if (Head == NULL)
    {
        printf("list is empty");
    }

    while (ptr != NULL)
    {
        printf("%d  ", ptr->data);
        ptr = ptr->next;
    }

    printf("\n\n");
}

void Delete_back()
{

    struct Node *temp = Head;
    struct Node *p;

    while (temp->next != NULL)
    {
        p = temp;
        temp = temp->next;
    }

    p->next = NULL;
    free(temp);
}

void Insert_front(int number)
{

    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = number;
    temp->next = NULL;
    temp->previous = NULL;

    if (Head == NULL)
    {
        Head = temp;
    }
    else
    {
        temp->next = Head;
        Head = temp;
    }
}

void Delete_front()
{
    struct Node *temp = Head;
    Head = Head->next;
    free(temp);
}

void Insert_middle(int number)
{

    struct Node *ptr = Head;
    while (ptr->data != number)
    {
        ptr = ptr->next;
    }
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = number;
    temp->previous=ptr;
    temp->next=ptr->next;

    
}

int main()
{

    Insert_back(93);
    Insert_back(38);
    Insert_back(9);
    Insert_front(73);
    Insert_front(98);
    Insert_front(79);
    print_list();

    Delete_front();
    Delete_front();
    Delete_front();

    print_list();
    return 0;
}