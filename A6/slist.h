//
//  slist.h
//  A6
//
//  Created by Diego Gayosso Hernandez on 10/4/24.
//

#ifndef slist_h
#define slist_h

#include <stdio.h>
void insertHead(SList* list, char* data);
char* removeHead(SList* list);
void insertTail(SList* list, char* data);
char* removeTail(SList* list);

#endif /* slist_h */
