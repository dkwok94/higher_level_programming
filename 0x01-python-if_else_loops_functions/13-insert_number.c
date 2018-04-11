#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *insert_node - inserts a node into a sorted list
 *@head: the head of the linked list
 *@number: the number data of the new node
 *
 *Return: the address of the new node
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new;
	listint_t *top;

	top = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;
	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (top->next != NULL)
	{
		if (top->next->n > new->n && top->n < new->n)
		{
			new->next = top->next;
			top->next = new;
			return (new);
		}
		else if ((*head)->n > new->n)
		{
			new->next = (*head);
			(*head) = new;
			return (new);
		}
		else
			top = top->next;
	}
	top->next = new;
	new->next = NULL;
	return (new);
}
