#include"stdafx.h"
#include"sqlist.h"
using namespace std;
/*#ifndef OK
#define OK 1
#endif // !OK
#ifndef ERROR
#define ERROR 0
#endif // !ERROR
#ifndef  MAX_SIZE 1024
#define MAX_SIZE 1024
#endif // ! MAX_SIZE 1024*/

void ShowAll(SequenList* head) {
	cout << "一共有" << head->last + 1 << "个元素" << endl;
	for (int i = 0; i <= head->last; i++)
	{
		cout << head->data[i] << " ";
	}
	cout << endl;
}

int InsertX(SequenList* head, int x) {
	int i = 0;
	if (!head || head->last < 0) return 0;
	if (head->last + 2 > 1024) return 0;
	for (i = 0; i <= head->last && x >= head->data[i]; i++)
	{
		;
	}
	for (int j = head->last + 1; j > i; j--)
	{
		head->data[j] = head->data[j - 1];
	}
	head->data[i] = x;
	head->last++;
	return 1;
}

int DelSame(SequenList * a, SequenList * b, SequenList * c)
{
	if (!a || !b || !c) return 0;
	for (int i = 0; i <= a->last; i++)
	{
		int ele = a->data[i];
		int j = 0;
		int min;
		for (j = 0; j <= b->last; j++)
		{
			if (b->data[j] == ele) break;
		}
		if (j > b->last) continue;
		for (j = 0; j <= c->last; j++)
		{
			if (c->data[j] == ele) break;
		}
		if (j > c->last) continue;
		for (int k = i; k <= a->last; ++k) {
			a->data[k] = a->data[k + 1];
		}
		a->last--;
		--i;
	}
	return 0;
}
