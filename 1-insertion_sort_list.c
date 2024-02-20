#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * @list: doubly linked list of integers
 *
 * Return: Void.
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *n, *h, *t;

	if (!(*list) || !(*list)->next)
		return;
	n = *list;
	while (n)
	{
		if (n->next && (n->n > n->next->n))
		{
			h = n->next;
			for (t = h; t->prev; t = t->prev)
				if (t->prev->n < t->n)
					break;

			if (h->next && h->prev)
				h->prev->next = h->next, h->next->prev = h->prev;
			else
				h->prev->next = NULL;

			h->next = t;
			if (t->prev)
				t->prev->next = h, h->prev = t->prev, t->prev = h;
			else
				t->prev = h, h->prev = NULL, *list = h;
			print_list(*list), n = *list;
		}
		else
			n = n->next;
	}
}
