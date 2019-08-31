#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node* next;
};
void print_linked_list(struct Node* node)
{
	while(node!=NULL)
	{
		printf("%d ",node->data);
		node=node->next;
	}
}
void insert_at_location(struct Node* prev, int newData)
{
	if(prev==NULL)
	{
			printf("Given prev nodes cannot be null");
		       return;
	}	       
	struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
	new_node->data=newData;
	new_node->next=prev->next;
	prev->next=new_node;
}
int main(void)
{
	struct Node* node1=NULL;
	struct Node* node2=NULL;
	struct Node* node3=NULL;
	struct Node* node4=NULL;
	node1=(struct Node*)malloc(sizeof(struct Node));
	node2=(struct Node*)malloc(sizeof(struct Node));
	node3=(struct Node*)malloc(sizeof(struct Node));
	node4=(struct Node*)malloc(sizeof(struct Node));
	node1->data=1;
	node1->next=node2;
	node2->data=2;
	node2->next=node3;
	node3->data=3;
	node3->next=node4;
	node4->data=4;
	node4->next=NULL;
	print_linked_list(node1);
	printf("\n");
	insert_at_location(node1->next,5);
	print_linked_list(node1);
	return 0;
}


