// datastu.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"arraylist.h"

int main()
{
	alist *a = init_list();
	cout << *(a->first + 2) << endl;
    return 0;
}

