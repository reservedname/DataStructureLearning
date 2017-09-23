#pragma once
#include "stdafx.h"
using namespace std;

struct Poly
{
	int fac;	//ϵ��
	int	index;	//ָ��
};

struct List
{
	Poly x;
	List* next;
};

Poly* initPoly(vector<int> vec);

List* initList(Poly* a, int lenth);

void showPoly(Poly a);

void showList(List* head);

int addList(List* a, List* b, List** c);

void show(List* head, char ch);