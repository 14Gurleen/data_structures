#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* next;
};
void insert(struct Node** head_ref, int newData)
{
	struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
	new_node->data=newData;
	new_node->next=(*head_ref);
	(*head_ref)=new_node;
}
int detect_loop(struct Node* list)
{
	struct Node* slow=list;
	struct Node* fast=list;
	while(slow && fast && fast->next)
	{
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast)
		{
			printf("Loop Found");
			return 1;
		}
	}
	return 0;
}
int main(void)
{
	struct Node* head=NULL;
	insert(&head, 10);
	insert(&head, 15);
	insert(&head, 20);
	insert(&head, 5);
	head->next->next->next=head;
	detect_loop(head);
}
