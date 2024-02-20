#include "sort.h"

/**
 * swap_nodes - a function that swaps the nodes of a doubly linked list
 *
 * @list: pointer to a doubly linked list
 * @node1: pointer to the first node
 * @node2: pointer to the second node
 *
 */

void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2)
{
	if (node1->prev)
		node1->prev->next = node2;
	else
		*list = node2;
	if (node2->next)
		node2->next->prev = node1;
	node1->next = node2->next;
	node2->prev = node1->prev;

	node1->prev = node2;
	node2->next = node1;
}

/**
 * insertion_sort_list - a function that sorts a doubly linked list using
 * insertion sort algorithm
 *
 * @list: the pointer to the linked list
 *
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current;


	if (list == NULL || *list == NULL || (*list)->next == NULL)
	{
		return;
	}

	current = (*list)->next;

	while (current != NULL)
	{
		listint_t *insertion_point = current->prev;

		while (insertion_point != NULL && insertion_point->n > current->n)
		{
			swap_nodes(list, insertion_point, current);

			print_list(*list);

			insertion_point = current->prev;
		}

		current = current->next;
	}
}
