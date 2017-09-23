#pragma once
#include"stdafx.h"
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

struct SequenList {
	int data[1024];
	int last;
};

void ShowAll(SequenList* head);

int InsertX(SequenList* head, int x);

int DelSame(SequenList* a, SequenList* b, SequenList* c);