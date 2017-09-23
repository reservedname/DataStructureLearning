#pragma once
#include"stdafx.h"
using namespace std;
#ifndef OK
#define OK 1
#endif // !OK
#ifndef ERROR
#define ERROR 0
#endif // !ERROR

typedef int Status;

struct LinkedList {
	int ele;
	LinkedList* next;
};

LinkedList* createList(vector<int> init);

void showAll(LinkedList *head);

Status delEle(LinkedList* head, int mink, int maxk);