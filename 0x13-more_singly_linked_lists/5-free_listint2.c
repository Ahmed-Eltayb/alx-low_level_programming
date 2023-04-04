#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: list
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		ptr = *head;
		*head = ptr->next;
		free(ptr);
	}

}
