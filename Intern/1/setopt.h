#pragma once
#include"stdafx.h"

struct SetList
{
	char ch;
	SetList* next;
};

SetList* initSetList(char* str, int n) {
	SetList *head = (SetList*)malloc(sizeof(SetList));
	SetList *t, *s = head;
	char c;

	sort(str, str + n);
	for (auto i = 0; i < n; i++)
	{
		c = *(str + i);
		if (c<'a' || c>'z') continue;
		if ( c != s->ch) {
			t = (SetList*)malloc(sizeof(SetList));
			t->ch = c;
			s->next = t;
			s = t;
		}
	}
	s->next = nullptr;
	return head;
}

void show(SetList* head) {
	SetList* s = head->next;
	while (s) {
		cout << s->ch << " ";
		s = s->next;
	}
	cout << endl;
}

void setMixed(SetList *a, SetList *b) {
	SetList* c = (SetList*)malloc(sizeof(SetList));
	SetList* s = c;
	SetList* t;
	SetList *p = a->next, *q = b->next;
	while (p&&q) {
		if (p->ch < q->ch) {
			t = (SetList*)malloc(sizeof(SetList));
			t->ch = p->ch;
			s->next = t;
			s = t;
			p = p->next;
		}
		else if (p->ch > q->ch) {
			t = (SetList*)malloc(sizeof(SetList));
			t->ch = q->ch;
			s->next = t;
			s = t;
			q = q->next;
		}
		else if (p->ch == q->ch && p->ch != s->ch) {
			t = (SetList*)malloc(sizeof(SetList));
			t->ch = p->ch;
			s->next = t;
			s = t;
			p = p->next;
			q = q->next;
		}
		else {
			p = p->next;
			q = q->next;
		}
	}
	if (p) {
		s->next = p;
	}
	else if (q) {
		s->next = q;
	}
	show(c);
}

void setUnion(SetList *a, SetList *b) {
	SetList *c = (SetList*)malloc(sizeof(SetList));
	SetList *p = a->next, *q = b->next;
	SetList *t, *s = c;
	while (p&&q) {
		if (p->ch == q->ch && p->ch != s->ch) {
			t = (SetList*)malloc(sizeof(SetList));
			t->ch = p->ch;
			
		}
	}
}