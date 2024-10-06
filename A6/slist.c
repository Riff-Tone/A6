//
//  slist.c
//  A6
//
//  Created by Diego Gayosso Hernandez on 10/4/24.
//

#include "slist.h"
#include <stdlib.h>
#include <string.h>

Deque q = {NULL,NULL};

/*
 * it just iterates through the list, and returns the node before the tail.
 */
Node* iterate(void){
	if(q.head == NULL){ return q.head;}
	Node *current = q.head;
	Node *BeforeCurrent = NULL;
	while(current->next != NULL){
		BeforeCurrent = current;
		current = current->next;
	}
	return BeforeCurrent;
}

/*
* all this does is take a node and inserts it at the tail and updates the tail to the new node
*/
void push_back(Node *User){
	if(q.tail != NULL){
		q.tail->next = User;
		q.tail = User;
		return;
	}
	q.head->next = User;
	q.tail = User;
}
 /*
  *all this does is takes a Node called User and sets its next to the head, then sets the head equal to the Node
  */
void push_front(Node *User){
	User->next = q.head;
	q.head = User;
}

/*
 * I know, this should do one thing but, why. What this does is sets the tail Node As the head
 * then it updates the tail to be the Node before the tail, then sets its next to NULL
 * return the data of the previous tail, now called head.
 */
char* pop_back(void){
	Node *BeforeTail = iterate();
	push_front(q.tail);
	q.tail = BeforeTail;
	q.tail->next = NULL;
	return q.head->data;
}

/*
 * sets a reference of q.head called temp, updates the head to its next node, sets temp.next to NULL
 * and inserts it at the tail.
 */
char* pop_front(void){
	Node *temp = q.head;
	q.head = q.head->next;
	temp->next = NULL;
	push_back(temp);
	return q.tail->data;
}

/*
 * this is for the read file if i get it to work, essentailly it just takes an array of char, ideally the name
 * allocates memory for it, and inserts it to the deque.
 */
void insert(char data[]){
	Node *User = malloc(sizeof(Node));
	strcpy(User->data, data);
	if(q.head == NULL){
		q.head = User;
	}
	else{
		push_back(User);
	}
}

