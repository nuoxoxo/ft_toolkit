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

int	route_ptr(int fd, uintptr_t num)
{
	write(fd, "0x", 2);
	if (!num)
		write(fd, "0", 1);
	else
		print_ptr(fd, num);
	return (count_ptr(num));
}

void	print_ptr(int fd, uintptr_t num)
{
	char	*baseline;

	baseline = "0123456789abcdef";
	if (num >= 16)
		print_ptr(fd, num / 16);
	write(fd, & baseline[num % 16], 1);
}

int	count_ptr(uintptr_t x)
{
	int	i;

	i = 3;
	if (!x)
		return (i);
	while (x >= 16)
	{
		x /= 16;
		i++;
	}
	return (i);
}
