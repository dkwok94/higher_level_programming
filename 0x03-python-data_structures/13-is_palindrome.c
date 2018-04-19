#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *is_palindrome - checks if a singly linked list is a palindrome
 *@head: the head of the linked list
 *
 *Return: 0 if not a palindrome, 1 if it is a palindrome
 */
int is_palindrome(listint_t **head)
{
	listint_t *checker = *head, *firsthalf = *head, *secondhalf = *head;
	int nodes = 0, checkpos, checkcounter, counter = 0;

	if (head == NULL || *head == NULL)
		return (1);
	while (checker != NULL)
	{
		nodes++;
		checker = checker->next;
	}
	if (nodes == 1)
		return (1);
	checkpos = nodes;
	while (counter < (nodes / 2) - 1)
	{
		secondhalf = secondhalf->next;
		counter++;
	}
	counter = 0;
	while (counter <= nodes / 2)
	{
		checker = secondhalf;
		checkcounter = nodes / 2;
		while (checkcounter < checkpos)
		{
			checker = checker->next;
			checkcounter++;
		}
		if (firsthalf->n == checker->n)
		{
			firsthalf = firsthalf->next;
			checkpos--;
			counter++;
		}
		else
			return (0);
	}
		return (1);
}
