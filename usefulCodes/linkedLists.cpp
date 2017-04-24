#include <iostream>
using namespace std;
struct ListNode
{
	int data;
	struct ListNode *next;
}*head;

int ListLength(struct ListNode *head)
{
	struct ListNode *current=head;
	int count=0;
	while(current!=NULL)
	{
		count++;
		current=current->next;
	}
	return count;
}