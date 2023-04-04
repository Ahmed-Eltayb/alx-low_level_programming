#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a listint_t list
 * @head: pointer
 * @n: n to be added
 * Return: newNode
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;

	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
