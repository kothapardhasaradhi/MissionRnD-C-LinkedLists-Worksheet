/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N)
{
	struct node *newnode, *temp;
	newnode = (struct node*)malloc(sizeof(struct node));
	if (N < 0)
		N = N*-1;
	newnode->num = N % 10;
	N = N / 10;
	newnode->next = NULL;
	temp = newnode;
	while (N != 0)
	{
		temp = (struct node*)malloc(sizeof(struct node));
		temp->num = N % 10;
		temp->next = newnode;
		N = N / 10;
		newnode = temp;
	}
	return newnode;
	//return NULL;
}