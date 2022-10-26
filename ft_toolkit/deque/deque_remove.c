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

void	deque_remove(t_deque *dq, void (*del) (void *))
{
	if (!dq)
		return ;
	if (del)
		del(dq->cont);
	if (dq->prev)
		dq->prev->next = dq->next;
	if (dq->next)
		dq->next->prev = dq->prev;
	free(dq);
}
