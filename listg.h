#ifndef listg_h
#define listg_h
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define n 11
#define m 3

typedef int DataType;

typedef struct node_{
	DataType data;
	struct node_ *next;
	int no;
}Node;

typedef struct list_{
	Node *head;
	Node *tail;
	Node *current;
}List;

void initList(List *);
int getLen(List *);
void addHead(List *,DataType); 
void delNode(List *,DataType);
Node *getNode(List *,DataType);
Node *Find(List *,DataType);
void printList(List *);
void CreatList();
void Delect();
void Print();


#endif

