#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - mas listas enlazadas
 * @h: Doble puntero asignado
 * Return: i
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *temp;
	size_t i = 0;

	temp = *h;
	if (h == NULL)
		return (i);
	while (temp)
	{
		if (temp <= temp->next)
		{
			free(temp);
			i++;
			break;
		}

		*h = temp->next;
		free(temp);
		temp = *h;
		i++;
	}
	*h = NULL;
	return (i);
}
