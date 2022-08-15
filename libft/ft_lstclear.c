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

//	same as piscine Day 11

#include "ft_toolkit.h"

void	ft_lstclear(t_list **begin_list, void (*del) (void *))
{
	t_list	*ptr;

	if (!*begin_list)
		return ;
	while (*begin_list)
	{
		ptr = *begin_list;
		*begin_list = (*begin_list)->next;
		del(ptr->content);
		free(ptr);
	}
	return ;
}
