#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;      // #
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;      // #

    if(*Head == NULL)       // LL is empty
    {
        *Head = newn;
    }
    else                    // LL contains atleast one node in it
    {
        (*Head)->prev = newn;       // #
        newn->next = *Head;
        *Head = newn;
    }
}

void InsertLast(PPNODE Head, int No)
{
    PNODE newn = NULL;
    PNODE temp = *Head;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;      // #

    if(*Head == NULL)       // LL is empty
    {
        *Head = newn;
    }
    else                    // LL contains atleast one node in it
    {
        while(temp->next != NULL)   // type 2
        {
            temp = temp -> next;
        }

        temp->next = newn;
        newn->prev = temp;      // #
    }
}

void InsertAtPos(PPNODE Head, int No, int iPos)
{}

void DeleteFirst(PPNODE Head)
{   
    if(*Head == NULL)                   // LL is empty
    {
        return;
    }
    else if((*Head)->next == NULL)      // LL contains 1 node
    {
        free(*Head);
        *Head = NULL; 
    }
    else                                // LL contains more than one node
    {
        *Head = (*Head) -> next;
        free((*Head)->prev);        // #
        (*Head) -> prev = NULL;       // #
    }
}

void DeleteLast(PPNODE Head)
{
    if(*Head == NULL)                   // LL is empty
    {
        return;
    }
    else if((*Head)->next == NULL)      // LL contains 1 node
    {
        free(*Head);
        *Head = NULL; 
    }
    else                                // LL contains more than one node
    {

    }
}

void DeleteAtPos(PPNODE Head, int iPos)
{}

void Display(PNODE Head)
{
    printf("Elements of Linked List are : \n");

    printf("NULL <=> ");
    while(Head != NULL)
    {
        printf("| %d | <=> ",Head->data);
        Head = Head -> next;
    }
    printf("NULL \n");
}

int Count(PNODE Head)
{
    int iCount = 0;

    while(Head != NULL)
    {
        iCount++;
        Head = Head -> next;
    }

    return iCount;
}

int main()
{
    PNODE First = NULL;

    int iRet = 0;

    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);        
    InsertFirst(&First,11);

    iRet = Count(First);
    printf("Number of elements are : %d\n",iRet);

    Display(First);
    
    InsertLast(&First,111);
    InsertLast(&First,121);

    iRet = Count(First);
    printf("Number of elements are : %d\n",iRet);

    Display(First);
    
    
    return 0;
}