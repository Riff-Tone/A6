//
//  slist.h
//  A6
//
//  Created by Diego Gayosso Hernandez on 10/4/24.
//

#ifndef slist_h
#define slist_h

#include <stdio.h>

typedef struct Node {
	 char data[20];
	 struct Node* next;
} Node;

typedef struct Deque{
	Node *head;
	Node *tail;
}Deque;

typedef struct SList{
	Node* head;
}SList;

void push_back(Node *User);
void push_front(Node *User);
char* pop_back(void);
char* pop_front(void);
void insert(char data[]);
#endif /* slist_h */
