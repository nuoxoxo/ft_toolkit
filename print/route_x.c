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

#include "print.h"

int	route_hex(unsigned int num, char *baseline)
{
	print_hex(num, baseline);
	return (count_hex(num));
}

void	print_hex(unsigned int num, char *baseline)
{
	if (num >= 16)
		print_hex(num / 16, baseline);
	write(1, & baseline[num % 16], 1);
}

int	count_hex(unsigned int x)
{
	int	i;

	i = 1;
	while (x >= 16)
	{
		x /= 16;
		i++;
	}
	return (i);
}
