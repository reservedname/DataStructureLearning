#include "stdafx.h"
#include "arraylist.h"

alist * init_list(int lenth)
{

	alist* head = (alist*)malloc(sizeof(head));
	if (lenth > MAX_LENTH) lenth = MAX_LENTH;
	else if (lenth < 1) lenth = 1;
	head->first = (int*)malloc(lenth*(sizeof(int)));
	head->lenth = lenth;
	for (int i = 0; i < lenth; i++)
	{
		*(head->first + i) = 0;
	}
	return head;
}

alist* init_valued_list(vector<type> vec) {
	alist* head = nullptr;
	int lenth = vec.size();
	if (lenth > MAX_LENTH) lenth = MAX_LENTH;
	else if (lenth < 1) lenth = 1;

	head->first = (type*)malloc(INIT_LENTH*(sizeof(type)));
	for (int i = 0; i < lenth; i++)
	{
		*(head->first + i) = vec[i];
	}
	return head;
}

int isEmpty(const alist* head) {
	return head->lenth == 0;
}

int isFull(const alist* head) {
	return head->lenth == MAX_LENTH;
}

int insert_ele(alist* head, type elem, int site = -1) {
	if (-1 == site) {
		site = head->lenth;
		*(head->first + site) = elem;
		head->lenth++;
		return OK;
	}
	else if (site < 0 || site > head->lenth) return ERROR;
	else
	{
		for (int i = head->lenth; i > site; i--)
		{
			*(head->first + i) = *(head->first + i - 1);
		}
		*(head->first + site) = elem;
		head->lenth++;
		return OK;
	}
}

int insert_list(alist *head, alist *toinsr, int site = -1)
{
	int size = toinsr->lenth;
	if (size + head->lenth > MAX_LENTH) return ERROR;
	if (-1 == site) {
		for (int i = head->lenth; i < head->lenth + size; i++)
		{
			*(head->first + i) = *(toinsr->first++);
		}
		head->lenth += toinsr->lenth;
		return OK;
	}
	else if (site < 0 || site > head->lenth) return ERROR;
	else
	{
		for (int i = site + size; i > site; i--)
		{
			*(head->first + i) = *(head->first + i - 1);
		}
		for (int i = site; i < site + size; i++)
		{
			*(head->first + i) = *(toinsr->first++);
		}
		head->lenth += toinsr->lenth;
		return OK;
	}
}
