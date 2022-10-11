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

#include "fpf.h"

int	route_chr(int fd, int c)
{
	return (write(fd, & c, 1));
}

int	route_str(int fd, char *s)
{
	int	i;

	i = 6;
	if (!s)
	{
		write(fd, "(null)", i);
		return (i);
	}
	i = -1;
	while (s[++i])
		write(fd, & s[i], 1);
	return (i);
}