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

t_deque	*deque_create_node(void *content)
{
	t_deque	*node;

	node = malloc(sizeof(t_deque));
	if (!node)
		return (NULL);
	node->cont = content;
	node->prev = NULL;
	node->next = NULL;
	return (node);
}
