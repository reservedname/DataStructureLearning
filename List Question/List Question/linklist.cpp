#include "stdafx.h"
#include "linklist.h"

LinkedList * createList(vector<int> init)
{
	LinkedList* head = (LinkedList*)malloc(sizeof(LinkedList));
	LinkedList *p = (LinkedList*)malloc(sizeof(LinkedList)), *q = nullptr;
	head = p;
	for (auto i = init.begin(); i != init.end(); i++)
	{
		q = (LinkedList*)malloc(sizeof(LinkedList));
		q->ele = *i;
		p->next = q;
		p = q;
	}
	p->next = nullptr;
	return head;
}

void showAll(LinkedList *head)
{
	LinkedList* t = head->next;
	while (t) {
		cout << t->ele << " ";
		t = t->next;
	}
	cout << endl;
}

Status delEle(LinkedList * head, int mink, int maxk)
{
	if (!head || !head->next) return ERROR;
	LinkedList* p = head->next;
	LinkedList* q = p->next;
	if (p->ele > mink && p->ele < maxk) {
		head->next = q;
		free(p);
		p = head;
	}
	while (q) {
		if (q->ele > mink && q->ele < maxk) {
			p->next = q->next;
			free(q);
			q = p->next;
			continue;
		}
		p = q;
		q = q->next;
	}
	return OK;
}
