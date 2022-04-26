#include "lists.h"

/**
 * _ra - reallocates memory for an array of pointers
 * to the nodes in a linked list
 * @list: the old list to append
 * @size: size of the new list (always one more than the old list)
 * @new: new node to add to the list
 * Return: pointer to the new list
 */
size_t free_listint_safe(listint_t **h)
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
