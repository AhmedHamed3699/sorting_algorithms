#include "./sort.h"

/**
 * insertion_sort_list - sort list using insertion sort
 * @list: the list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *tmp, *prev;

	if (!list || !*list)
		return;

	current = *list;

	while (current)
	{
		prev = current->prev;
		tmp = current;

		while (prev && prev->n > tmp->n)
		{
			tmp->prev = prev->prev;

			if (tmp->prev)
				tmp->prev->next = tmp;

			prev->next = tmp->next;

			if (prev->next)
				prev->next->prev = prev;

			tmp->next = prev;
			prev->prev = tmp;
			prev = tmp->prev;

			if (!tmp->prev)
				*list = tmp;

			print_list(*list);
		}

		current = current->next;
	}
}
