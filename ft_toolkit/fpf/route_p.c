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

int	fpf_route_ptr(int fd, uintptr_t num)
{
	write(fd, "0x", 2);
	if (!num)
		write(fd, "0", 1);
	else
		fpf_print_ptr(fd, num);
	return (fpf_count_ptr(num));
}

void	fpf_print_ptr(int fd, uintptr_t num)
{
	char	*baseline;

	baseline = "0123456789abcdef";
	if (num >= 16)
		fpf_print_ptr(fd, num / 16);
	write(fd, & baseline[num % 16], 1);
}

int	fpf_count_ptr(uintptr_t x)
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
