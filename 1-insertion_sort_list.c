#include "sort.h"

/**
 * insert - Swaps two nodes
 * @list: head of the doubly linked list.
 * @n1: first node
 * @n2: second node
 */
void insert(listint_t **list, listint_t **n1, listint_t *n2)
{
	(*n1)->next = n2->next;
	if (n2->next != NULL)
		n2->next->prev = *n1;
	n2->prev = (*n1)->prev;
	n2->next = *n1;
	if ((*n1)->prev != NULL)
		(*n1)->prev->next = n2;
	else
		*h = n2;
	(*n1)->prev = n2;
	*n1 = n2->prev;
}

/**
 * insertion_sort_list - sorts an array ASC
 * @list: list
 * Return: None
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *past, *aux, *current = (*list)->next;

	if (list == NULL || (*list)->next == NULL || *list == NULL)
		return;
	for (; current != NULL; current = aux)
	{
		aux = current->next;
		past = current->prev;
		while (past && past->n > current->n)
		{
			insert(list, &past, current);
			print_list((const listint_t *)*list);
		}
	}
}
