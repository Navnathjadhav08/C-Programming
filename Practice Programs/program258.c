#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

int Count(PNODE Head)
{
    return 0;
}

void InsertAtPos(PPNODE Head, int No, int Pos)
{}

void DeleteFirst(PPNODE Head)
{}

void DeleteLast(PPNODE Head)
{}

void DeleteAtPos(PPNODE Head, int Pos)
{}


void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;

    // Allocate memory for node
    newn = (PNODE)malloc(sizeof(NODE));

    // Initialise the node
    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL) // LL is empty
    {
        *Head = newn;
    }
    else        // LL contains atleast one node
    {
        newn->next = *Head;
        *Head = newn;
    }
}

void InsertLast(PPNODE Head, int No)
{
    PNODE newn = NULL;

    // Allocate memory for node
    newn = (PNODE)malloc(sizeof(NODE));

    // Initialise the node
    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL) // LL is empty
    {
        *Head = newn;
    }
    else        // LL contains atleast one node
    {

    }
}

void Display(PNODE Head)
{
    printf("Elements of Linked list are : \n");

    while(Head != NULL)
    {
        printf("%d\t",Head->data);
        Head = Head -> next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,51);     // InsertFirst(60,51);
    InsertFirst(&First,21);     // InsertFirst(60,21);
    InsertFirst(&First,11);     // InsertFirst(60,11);

    Display(First);
    
    return 0;
}