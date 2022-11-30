#include "lists.h"

/**
 * check_cycle - Checks if a list has a cycle
 * @list: The given list
 * Return: 1 or 0
 */
int check_cycle(listint_t *list)
{
	int result = 0;
	listint_t *temp = list, *fast_temp = list;

	while ((temp && fast_temp) && fast_temp->next)
	{
		temp = temp->next;
		if (temp->next == list)
		{
			result = 1;
			break;
		}
		if (fast_temp->next || fast_temp->next->next)
			fast_temp = fast_temp->next->next;
		else
			break;
		if (temp == fast_temp)
		{
			result = 1;
			break;
		}
	}
	return (result);
}
