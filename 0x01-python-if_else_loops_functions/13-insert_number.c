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
	listint_t *bottom;

	if (head == NULL || *head == NULL)
		return (NULL);
	top = *head;
	bottom = (*head)->next;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;
	while (bottom != NULL)
	{
		if (bottom->n > new->n && top->n < new->n)
		{
			new->next = bottom;
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
		{
			top = top->next;
			bottom = bottom->next;
		}
	}
	top->next = new;
	new->next = NULL;
	return (new);
}
