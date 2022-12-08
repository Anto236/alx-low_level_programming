#include "lists.h"
/**
 * print_dlistint - prints number of nodes in a list
 *
 * @h: head of the list
 *
 * Return: nimber of nodes in a list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	/**while (h == NULL)
		return count;**/
	/**while (h->prev != NULL)
		h = h->prev;**/
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
