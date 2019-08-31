#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
};
void print_linked_list(struct Node* node)
{
	while(node!=NULL)
	{
		printf("%d ",node->data);
		node=node->next;
	}
}
void insert_at_end(struct Node** head_ref, int newData)
{
	struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
	struct Node *last=*head_ref;
	new_node->data=newData;
	new_node->next=NULL;
	if(*head_ref==NULL)
	{
		*head_ref=new_node;
		return;
	}
	while(last->next != NULL)
		last=last->next;
	last->next=new_node;
	return;
}
int main(void)
{
	struct Node* node1=NULL;
	struct Node* node2=NULL;
	struct Node* node3=NULL;
	node1=(struct Node*)malloc(sizeof(struct Node));
	node2=(struct Node*)malloc(sizeof(struct Node));
	node3=(struct Node*)malloc(sizeof(struct Node));
	node1->data=1;
	node1->next=node2;
	node2->data=2;
	node2->next=node3;
	node3->data=3;
	node3->next=NULL;
	print_linked_list(node1);
	printf("\n");
	insert_at_end(&node1,4);
	print_linked_list(node1);
	return 0;
}

