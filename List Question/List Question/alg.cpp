#include "stdafx.h"
#include "alg.h"

Poly* initPoly(vector<int> vec)
{
	Poly* a = (Poly*)malloc((vec.size() / 2) * sizeof(Poly));
	Poly* b = a;
	for (auto i = vec.begin(); i != vec.end(); i++)
	{
		b->fac = *i;
		++i;
		b->index = *i;
		++b;
	}
	return a;
}

List* initList(Poly* a, int lenth) {
	List* head = (List*)malloc(sizeof(List));
	List* t;
	List* s = head;
	for (auto i = a; i < a + lenth; i++)
	{
		t = (List*)malloc(sizeof(List));
		t->x = *i;
		t->next = nullptr;
		s->next = t;
		s = t;
	}
	s->next = nullptr;
	return head;
}

void showPoly(Poly a) {
	cout << a.fac << " " << a.index << endl;
}

void showList(List * head)
{
	List* t = head->next;
	while (t) {
		showPoly(t->x);
		t = t->next;
	}
}

int addList(List * a, List * b, List ** c)
{
	List* p = a->next;
	List* q = b->next;
	List* r = *c;
	while (p && q) {
		if (p->x.fac < q->x.fac) {
			if (p->x.index != 0) {
				r->next = p;
				r = r->next;
			}
			p = p->next;
		} else if (p->x.fac > q->x.fac) {
			if (q->x.index != 0) {
				r->next = q;
				r = r->next;
			}
			q = q->next;
		} else {
			p->x.index += q->x.index;
			if (p->x.index != 0) {
				r->next = p;
				r = r->next;
			}
			p = p->next;
			q = q->next;
		}
	}
	while (p) {
		r->next = p;
		r = r->next;
		p = p->next;
	}
	while (q) {
		r->next = q;
		r = r->next;
		q = q->next;
	}
	return 1;
}

void show(List * head, char ch)
{
	List *t = head->next;
	int flag = 0;
	while (t) {
		if (flag && t->x.fac > 0) {	//补充运算符
			cout << "+";
		}
		flag = 1;
		if (t->x.fac == 0) {	//系数为0
			t = t->next;
			continue;	
		}
		if (t->x.fac == 1);
		else if (t->x.fac == -1) cout << "-";
		else cout << t->x.fac;	//系数为1
	

		if (t->x.index == 0) {	//指数为1
			cout << " ";
			t = t->next;
			continue;
		}
		cout << ch << "^" << t->x.index << " ";
		t = t->next;
	}
	cout << endl;
}
