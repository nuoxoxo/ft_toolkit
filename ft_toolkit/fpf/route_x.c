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

int	fpf_route_hex(int fd, unsigned int num, char *baseline)
{
	fpf_print_hex(fd, num, baseline);
	return (fpf_count_hex(num));
}

void	fpf_print_hex(int fd, unsigned int num, char *baseline)
{
	if (num >= 16)
		fpf_print_hex(fd, num / 16, baseline);
	write(fd, & baseline[num % 16], 1);
}

int	fpf_count_hex(unsigned int x)
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
