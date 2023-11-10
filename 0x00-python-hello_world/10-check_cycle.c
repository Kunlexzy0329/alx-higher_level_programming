#include "lists.h"

/**
* check_cycle -function to checks if a linked list have a cycle
* @list: linked list to check circle
* Return: 1 if the list has a cycle, 0 if it doesn't
*/

int check_cycle(listint_t *list)
{
listint_t *s = list;
listint_t *f = list;

if (!list)
return (0);

while (s && f && f->next)
{
s = s->next;
f = f->next->next;
if (s == f)
return (1);
}
return (0);
}
