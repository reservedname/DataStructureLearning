#pragma once
#include "stdafx.h"

struct JspList
{
	int password;
	int site;
	JspList* next;
};

JspList* initJsp(vector<int> vec) {
	JspList* head = (JspList*)malloc(sizeof(JspList));
	JspList *t, *s;
	s = head;
	int j = 1;
	for (auto i = vec.begin(); i != vec.end(); i++)
	{
		if (i + 1 == vec.end()) {
			head->password = *i;
			head->site = j;
			s->next = head;
			head = head->next;
			return head;
		}
		t = (JspList*)malloc(sizeof(JspList));
		t->password = *i;
		t->site = j++;
		s->next = t;
		s = t;
	}
}

void ShowJspList(JspList* head) {
	cout << head->password << " " << head->site << endl;;
	JspList* t = head->next;
	while (t != head) {
		cout << t->password << " " << t->site << endl;
		t = t->next;
	}
	cout << endl;
}

void OptJsp(JspList* head,int m) {
	JspList *t = head;
	int ps = m;
	int i = 0;
	while (i < 7) {
		int j = 1;
		while (j < ps || t->site == -1) {
			if (t->site != -1) ++j;
			t = t->next;
		}
		cout << t->site << " ";
		t->site = -1;
		ps = t->password;
		++i;
	}
}