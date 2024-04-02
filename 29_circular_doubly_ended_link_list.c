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
        printf("list is empty");
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
    struct Node*p = NULL;
    
    while(ptr->next!=Head)
    {
        p = ptr;
        ptr= ptr->next;
    }
    
    p->next = Head;
    Head->previous= p;
    free(ptr);
   
}

void Insert_front(int number)
{

    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = number;

    if (Head == NULL )
    {
        Head = temp;
        temp->next = Head;
    }
    else
    {
        temp->next = Head;
        Head->previous = temp;
        Head = temp;

        
        struct Node *ptr = Head;

        while (ptr->next != Head)
        {
            ptr = ptr->next;
                 printf("dxh");
        }
        ptr->next = Head;
    }
}

int main()
{
    Insert_back(1);
    Insert_back(2);
    Insert_back(3);
    Insert_back(4);
    Insert_back(5);
    Print_list();

    Insert_front(58);
   
    Insert_front(6);
    Insert_front(7);

    Print_list();
}