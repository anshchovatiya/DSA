#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *Head = NULL;
struct Node *Tail = NULL;

// this is a function to insert value at back part of the list
void Insert_back(int number)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = number;
    temp->next = Head;

    if (Head == NULL && Tail == NULL)
    {
        Head = temp;
        Tail = temp;
        return;
    }

    Tail->next = temp;
    Tail = temp;
}

void Insert_front(int number)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = number;
    temp->next = Head;
    Head = temp;
    Tail->next = Head;
}

void Print_list()
{
    struct Node *ptr = Head;
    printf("\n");
    while (ptr != Tail)
    {
        printf("%d  ", ptr->data);
        ptr = ptr->next;
    }
    printf("%d  ", ptr->data);
    printf("\n\n");
}

void Delete_first()
{
    struct Node *ptr = Head;
    Head = Head->next;
    Tail->next = Head;
    free(ptr);
}

void Delete_back()
{
     struct Node *ptr = Tail;
      struct Node *temp = Head;
      
      while(temp->next!=Tail)
      {
        temp = temp->next;
      }

      temp->next = Head;
      Tail = temp;
      free(ptr);
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

void delete_mid(int position)
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
    Insert_back(38);
    Insert_back(37);
    Insert_back(39);
    Insert_back(3);
    Insert_front(1);
    Insert_front(2);
    Insert_front(39);
    Insert_back(97);
    Insert_back(27);
    Insert_back(39);
 
  

    Print_list();

    Insert_mid(5,1);
    delete_mid(97);

    Print_list();
}