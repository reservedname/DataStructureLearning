// 1.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include "joseph.h"
#include "setopt.h"

int main()
{
	char s[14] = "mag123 azine";
	char t[10] = "p0a102per";
	SetList* a = initSetList(s, 12);
	SetList* b = initSetList(t, 9);
	setMixed(a, b);
/*	vector<int> a = { 3,1,7,2,4,8,4 };
	JspList* head = initJsp(a);
	OptJsp(head, 20);*/
    return 0;
}

