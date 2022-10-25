#include "lists.h"

/**
 * print_listint_safe - define function
 * @head: list of type listint_t to print
 * Return: what does it return?
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *f_ptr, *s_ptr;
	size_t size;

	size = 0;
	if (head == NULL)
		return (0);
	s_ptr = head;
	f_ptr = head->next;
	while (f_ptr != NULL && f_ptr < s_ptr)
	{
		size += 1;
	printf("[%p] %i\n", (void *)s_ptr, s_ptr->n);
		s_ptr = s_ptr->next;
		f_ptr = f_ptr->next;
	}
	printf("[%p] %i\n", (void *)s_ptr, s_ptr->n);
	size += 1;
	if (f_ptr)
		printf("-> [%p] %i\n", (void *)f_ptr, f_ptr->n);
	return (size);
}
