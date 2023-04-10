#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
}*head;

void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void insertAtBeginning(struct Node** headRef, int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = (*headRef);
    (*headRef) = newNode;
}

void insertAtEnd(struct Node** headRef, int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *headRef;
    newNode->data = newData;
    newNode->next = NULL;
    if (*headRef == NULL) {
        *headRef = newNode;
        return;
    }
    while (last->next != NULL)
        last = last->next;
    last->next = newNode;
    return;
}

void insertAtMiddle(struct Node* prevNode, int newData) {
    if (prevNode == NULL) {
        printf("Previous node cannot be NULL");
        return;
    }
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

void DeletionAtbegining()
{
    struct Node *temp;
    temp=head;
    head=temp->next;
    free(temp);
}
void DeletionAtEnd()
{
    struct Node *q,*p;
    q=head;
    p=head;
    while(q->next->next!=NULL)
    {
        q=q->next;
    }
    while(p->next!=NULL)
    {
        p=p->next;
    }
    q->next=NULL;
    free(p);
}
void DeletionAtPosition(int pos)
{
    struct Node *p,*temp;
    temp=head;
    p=head;
    for (int i=1;i<pos;i++)
    {
        temp=temp->next;
    }
    for (int i=1;i<(pos-1);i++)
    {
        p=p->next;
    }
    p->next=temp->next;
    free(temp);
}

int main() {
    struct Node* first = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;
    
    first = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    
    first->data = 1;
    first->next = second;
    
    second->data = 2;
    second->next = third;
    
    third->data = 3;
    third->next = NULL;
    head = first;
    printf("Initial list: ");
    printList(head);
    
    insertAtBeginning(&head, 0);
    printf("List after inserting at beginning: ");
    printList(head);
    
    insertAtEnd(&head, 4);
    printf("List after inserting at end: ");
    printList(head);
    
    insertAtMiddle(head->next, 5);
    printf("List after inserting at position 3: ");
    printList(head);
    
    DeletionAtbegining();
    printf("List after Deleting in the beginning: ");
    printList(head);

    DeletionAtEnd();
    printf("List after Deleting in the end: ");
    printList(head);

    DeletionAtPosition(3);
    printf("List after Deleting in position 3: ");
    printList(head);
    return 0;
}

