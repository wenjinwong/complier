#include "util.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void* check_malloc(int size) {
	void *ptr = malloc(size);
	if(!ptr) {
		fprintf(stderr, "\nRan out of memory!\n");
		exit(0);
	}
	return ptr;
}

string String(char *s) {
	string p = check_malloc(strlen(s) + 1);
	strcpy(p, s);
	return p;
}

U_boolList U_BoolList(bool head, U_boolList tail) {
	U_boolList list = check_malloc(sizeof(*list));
	list->head = head;
	list->tail = tail;
	return list;
}
