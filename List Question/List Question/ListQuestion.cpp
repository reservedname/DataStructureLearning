// ListQuestion.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
//#include "sqlist.h"
//#include "linklist.h"
#include "alg.h"

int main()
{
	vector<int> vec = { 1,2,3,4,5,6,7,8 };
	vector<int> ved = { -2,3,5,2,10,11 };
	Poly* a = initPoly(vec);
	Poly* b = initPoly(ved);
	List* list_a = initList(a, 4);
	List* list_b = initList(b, 3);
	List* list_c = (List*)malloc(sizeof(List));
	addList(list_a, list_b, &list_c);
	show(list_c, 'x');
/*	vector<int> a = { 1,2,3,4,5,6,7 };
	vector<int> b = { 3,5,8,4,1,4,6,5,5,5,9,1,7 };
	LinkedList* head = createList(b);
	showAll(head);
	delEle(head, 2, 7);
	showAll(head);
	*/
//	int last = 5;
/*	SequenList* head = (SequenList*)malloc(sizeof(SequenList));
	for (int i = 0; i < last; i++)
	{
		head->data[i] = i;
	}
	head->last = last - 1;
	ShowAll(head);
	InsertX(head, 5);
	ShowAll(head);*/
/*	SequenList* a = (SequenList*)malloc(sizeof(SequenList));
	SequenList* b = (SequenList*)malloc(sizeof(SequenList));
	SequenList* c = (SequenList*)malloc(sizeof(SequenList));
	for (int i = 0; i <= last; i++)
	{
		a->data[i] = i + 1;
	}
	a->last = last;
	for (int i = 0; i <= 4; i++)
	{
		b->data[i] = 2 * i - 1;
	}
	b->last = 4;
	c->data[0] = 2;
	c->data[1] = 6;
	c->data[2] = 1;
	c->data[3] = 5;
	c->last = 3;
	ShowAll(a);
	ShowAll(b);
	ShowAll(c);
	DelSame(a, b, c);
	ShowAll(a);*/
	return 0;
}

