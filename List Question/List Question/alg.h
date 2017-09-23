#pragma once
#include "stdafx.h"
using namespace std;

struct Poly
{
	int fac;	//系数
	int	index;	//指数
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