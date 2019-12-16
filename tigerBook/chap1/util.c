/* 
 * util.c - commonly used utility functions.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "util.h"

void *check_malloc(int size) {
	void *ptr = malloc(size);
	if(!ptr) {
		fprintf(stderr, "%s", "Run memory out!\n");
		exit(1);
	}
	return ptr;
}

string String(char *s) {
	string ps = check_malloc(strlen(s) + 1);
	strcpy(ps, s);
	return ps;
}

U_boolList U_BoolList(bool head, U_boolList tail) {
	U_boolList list = check_malloc(sizeof(*list));
	list->head = head;
	list->tail = tail;
	return list;
}
