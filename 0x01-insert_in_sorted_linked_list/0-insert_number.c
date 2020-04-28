#include "lists.h"

/**
 * insert_node - adds node to sorted ll
 * @head: pointer to frist node
 * @number: value of new node
 * Return: address of new node or NULL if fail
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *temp = *head;
	listint_t *last;


	if (newNode == NULL)
		return (Null);

	new->n = number;

	if (*head == NULL)
	{
		*head = newNode;
		return newNode;
	}

	if (number < (*head)->n)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	while (temp->n >= number)
	{
		if (temp->n >= number)
		{
			last->next = newNode;
			newNode->next = temp;
			return (new);
		}
		last = temp;
		temp = temp->next;

	}

	last->next = newNode;
	return (newNode);
}
