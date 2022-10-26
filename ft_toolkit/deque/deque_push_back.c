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

void	deque_push_back(t_deque **lst, t_deque *node)
{
	t_deque	*last;

	if (!node)
		return ;
	if (!(*lst))
		*lst = node;
	else
	{
		last = deque_back(*lst);
		last->next = node;
		node->prev = last;
	}
}
