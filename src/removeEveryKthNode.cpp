/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K)
{
	int i;
	struct node *temp;
	temp = head;
	if (K < 2)
		return NULL;
	while (temp != NULL)
	{
		
		for (i = 2; i < K; i++)
		{
			temp = temp->next;
		}
		if (temp->next != NULL)
		{
			temp->next = (temp->next)->next;
		}
		temp = temp->next;
	}
	return head;
	return NULL;
}