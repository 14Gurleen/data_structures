#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node
{
	int data;
	struct Node* next;
};
struct Node* remove(struct Node* head)
{
	if(head==NULL)
		return NULL;
	Node* temp=head;
	head=head->next;
	delete temp;
	return head;
}
void push(struct Node** headRef, int newData)
{
	struct Node* new_node=new Node;
	new_node->data=newData;
	new_node->next=(*headRef);
	(*headRef)=new_node;
}
int main(void)
{
	Node* head=NULL;
	push(&head, 5);
	push(&head, 4);
	push(&head, 3);
	push(&head, 2);
	push(&head, 1);
	head=remove(head);
	cout<<"After removing frst node:\n";
	for(Node* temp=head;temp!=NULL;temp=temp->next)
	{
		cout<<temp->data<<" ";
	}
	return 0;
}
