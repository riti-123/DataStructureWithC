#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node*next;
}*head;
int  linkedlistTraversal(struct Node*head);
int main()
{
  
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;
    struct Node *sixth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));
    sixth = (struct Node *)malloc(sizeof(struct Node));
    
    head->data = 7;
    head->next = second;

    
    second->data = 11;
    second->next = third;

    
    third->data = 41;
    third->next = fourth;

    
    fourth->data = 66;
    fourth->next = fifth;
    
    fifth->data =98;
    fifth->next=sixth;
    
    sixth->data =118;
    sixth->next =head;

    linkedlistTraversal(head);	
}
int  linkedlistTraversal(struct Node*head)
{
	struct Node*ptr=head;
	do{
		printf("element is %d\n",ptr->data);
		ptr=ptr->next;
	}
	while(ptr!=head);
}
