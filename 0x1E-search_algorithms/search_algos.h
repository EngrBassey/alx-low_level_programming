#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stddef.h>


typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

typedef struct skiplist_s
{
	int n;
	struct skiplist_s *express;
	struct skiplist_s *next;
} skiplist_t;

int linear_search(int *array, size_t size, int value);
#endif
