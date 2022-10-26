/* ************************************************************************** */
/*                                                                            */
/*                                                        ...      :::::::    */
/*   _                                                  ...      :::    :::   */
/*                                                    ... ...         :::     */
/*   By:  ______  <marvin@42.fr>                    ...  ...       :::        */
/*                                                ...........   :::           */
/*   Created: ____/__/__ __:__:__ by nuoxoxo           ...    :::             */
/*   Updated: ____/__/__ __:__:__ by nuoxoxo          ...   ::::::::.fi       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_toolkit.h"

void	deque_clear(t_deque **node, void (*del)(void *))
{
	t_deque	*head;
	t_deque	*tail;

	if (! node)
		return ;
	tail = *node;
	while (tail)
	{
		head = tail->next;
		deque_remove(tail, del);
		tail = head;
	}
	*node = NULL;
}
