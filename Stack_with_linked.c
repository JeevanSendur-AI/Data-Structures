#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
}*top=NULL;

void push(int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    if(top==NULL)
    {
        newNode->next=NULL;
    }
    else
    {
        newNode->next=top;
    }
    top=newNode;
    printf("Done Inserting...\n");
    
}
void pop()
{
    struct Node *p;
    p=top;
    if(top=NULL)
    {
        printf("Stack cannot be empty...");
    }
    else
    {
        top=p->next;
    }
    free(p);
}

void print()
{
    struct Node* ptr = top; 
    if(top == NULL)
    {
        printf("Cannot be empty");
        
    }
    while(ptr->next!=NULL)
    {
        printf("%d    ",ptr->data);
        ptr=ptr->next;
    }
    printf("%d    ",ptr->data);
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
    top = first;
    push(33);
    //pop();
    print();
    return 0;
}