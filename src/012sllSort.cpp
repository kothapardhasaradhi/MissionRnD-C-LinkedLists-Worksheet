/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head)
{
	/*	struct node *temp,*newnode,*end;
	end = head;//for last position
	while (end->next != NULL)
	{
	end = end->next;
	}
	temp = head;
	while (temp != NULL)
	{
	if ((temp->next)->data == 0)
	{
	if (temp->next != NULL)
	{
	temp->next = (temp->next)->next;
	}
	newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = 0;
	newnode->next = head;

	}
	if ((temp->next)->data == 2)
	{
	if (temp->next != NULL)
	{
	temp->next = (temp->next)->next;
	}
	newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = 2;
	newnode->next = NULL;
	end->next = newnode;
	}
	temp = temp->next;
	}*/
	int c_0 = 0, c_1 = 0, c_2 = 0;
	struct node *temp;
	temp = head;
	while (temp != NULL)
	{
		if (temp->data == 0)
			c_0++;
		if (temp->data == 1)
			c_1++;
		if (temp->data == 2)
			c_2++;
		temp = temp->next;
	}
	temp = head;
	while (c_0 != 0)
	{
		temp->data = 0;
		temp = temp->next;
		c_0--;
	}
	while (c_1 != 0)
	{
		temp->data = 1;
		temp = temp->next;
		c_1--;
	}
	while (c_2 != 0)
	{
		temp->data = 2;
		temp = temp->next;
		c_2--;
	}
}