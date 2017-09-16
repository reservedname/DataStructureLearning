#pragma once
#include"stdafx.h"
#define MAX_LENTH 50
#define INIT_LENTH 10

typedef int type;

typedef struct alist {
	type *first;
	int lenth;
}alist;

alist* init_list(int lenth = INIT_LENTH);

alist* init_valued_list(vector<type>);

int isEmpty(const alist*);

int isFull(const alist*);

type insert_ele(alist*, type, int);

int insert_list(alist*, alist*, int);

type delete_ele(alist*, type);

type delete_index(alist*, int);

type delete_list(alist*, int, int);

type find_ele(alist*, type);

type get_ele(alist*, int);

type show_list(const alist*);

type clear_list(alist);