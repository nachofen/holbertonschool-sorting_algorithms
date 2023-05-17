#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	listint_t *aux, *current, *previousn;

	if (list == NULL)
		return;

	current = *list;
	while (current != NULL)
	{
		aux = current;
		while (aux->prev != NULL && aux->n < aux->prev->n)
		{
			previousn = aux->prev;
			if (aux->next != NULL)
				aux->next->prev = previousn;
			if (previousn->prev != NULL)
				previousn->prev->next = aux;
			else
				*list = aux;

			previousn->next = aux->next;
			aux->prev = previousn->prev;
			aux->next = previousn;
			previousn->prev = aux;

			print_list(*list);

		}
		current = current->next;
	}
}
