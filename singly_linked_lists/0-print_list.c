#include "lists.h"

/**
 * print_list - print all members of the lsit
 * @h: poionts to node
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int i =0;

	while (h != NULL)
	{
		
		if (h->str=NULL)
		{	
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\",h->str, h->len);
		}	

	i++;
	h=h->next;
	}

	return(i);
}

