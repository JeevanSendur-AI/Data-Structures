#include<stdio.h>
#include<stdlib.h>

struct node 
{ 
      int data; 
      struct node *next; 
      struct node *prev; 
}*head;
void printList(struct node* nod) {
    while (nod != NULL) {
        printf("%d ", nod->data);
        nod = nod->next;
    }
    printf("\n");
}
int main(){
int sel;
 
struct node *one = NULL; 
struct node *two = NULL; 
struct node *three = NULL; 		

one = malloc(sizeof(struct node)); 
two = malloc(sizeof(struct node)); 
three = malloc(sizeof(struct node)); 

one->data = 1;
two->data = 2; 
three->data = 3; 
head = one;
 one->next = two; 
one->prev = NULL; 

two->next = three; 
two->prev = one; 

three->next = NULL; 
three->prev = two; 
while(1==1)
{
printf("current Node: ");
printList(head);

printf("What do you want to do?\n1. Insert at Beginning\n2. Insert at the end\n3. Insert at some index in-between\n");
printf("4. Delete at beginning\n5. Delete at End\n6. Delete at a position\n7. Exit\nEnter your choice as a number \n");
scanf("%d",&sel);

switch(sel){

case 1:
{
	int d;
	struct node *new = NULL;
	new = malloc(sizeof(struct node));
	printf("Enter the number you want to insert ");
	scanf("%d",&d);
	new->data = d;
	new->next=(head);
	new->prev=NULL;
	if((head) != NULL)
      	(head)->prev = new;
	(head) = new;
	break; 				
}

case 2:
{
	int d;
	struct node *new = NULL;
	new = malloc(sizeof(struct node));
	printf("Enter the number you want to insert ");
	scanf("%d",&d);
	struct node *tmp = NULL;
	tmp = malloc(sizeof(struct node));
	tmp -> next = head;
	new->data = d;
	if (head == NULL) 
	{
             new->prev = NULL;
             head = new;
             return 0;
      }
	while(tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
	new->prev = tmp;
	new->next = NULL;
      break;
}

case 3:
{
	int d,pos;
	struct node *new = NULL;
	new = malloc(sizeof(struct node));
	printf("Enter the number you want to insert ");
	scanf("%d",&d);
	printf("Enter the position you want to insert ");
	scanf("%d",&pos);
	struct node *tmp = NULL;
	tmp = malloc(sizeof(struct node));
	tmp -> next = head;
	struct node *tmp2 = NULL;
	tmp2 = malloc(sizeof(struct node));
	tmp2 -> next = head;
	new->data = d;
	
	for(int i=1;i<pos;i++)
	{
		tmp = tmp->next;
		tmp2 = tmp2->next;
	}
	tmp2 = tmp2 -> next;
	
	tmp->next = new;
	new->prev = tmp;
	
	new->next = tmp2;
	tmp2->prev = new;
      break;
}    
case 4:
{
    struct node *p;
    p=head;
    head=head->next;
    head->prev=NULL;
    free(p);
    break;
}
case 5:
{
    struct node *p;
    p=head;
    while (p->next!=NULL)
    {
        p=p->next;
    }
    p->prev->next=NULL;
    free(p);
    break;
}
 
case 6:
{
    struct node *p;
    int pos;
    p=head;
	printf("Enter the Position\n");
	scanf("%d",&pos);
    for (int i=1;i<pos;i++)
    {
        p=p->next;
    }
    p->prev->next=p->next;
    p->next->prev=p->prev;
    free(p);
    break;
}
case 7:
    {return 0;}
default:
{printf("Invalid input, try again");}
}
printList(head);}
return 0;}

