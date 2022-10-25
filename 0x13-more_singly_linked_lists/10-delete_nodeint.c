#include "lists.h"

/**
 * delete_nodeint_at_index - Delete the node at a given 
 * index of a listint_t list.
 * @head: A pointer to the address of the
 * head of a listint_t list.
 * @index: The index of the node to be deleted - indices start at 0.
 *
 * Return: On success - 1
 * On failure - - 1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	lisrint_t *tmp, *copy = *head;
	unsigned ont node;

	if (coppy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (copy->next == NULL)
			return (-1);

		copy = copy->next;
	}

	tmp = copy->next;
	copy->next = tmp->next;
	free(tmp);
	return (1);
}
