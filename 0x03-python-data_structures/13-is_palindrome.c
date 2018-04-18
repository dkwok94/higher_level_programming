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
	listint_t *checker = *head;
	listint_t *firsthalf = *head;
	int nodes = 0;
	int checkpos;
	int checkcounter;
	int counter = 0;

	if (head == NULL || *head == NULL)
		return (0);
	while (checker != NULL)
	{
		nodes++;
		checker = checker->next;
	}
	checkpos = nodes;
	while (counter <= nodes / 2)
	{
		checker = *head;
		checkcounter = 0;
		while (checkcounter < checkpos - 1)
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
