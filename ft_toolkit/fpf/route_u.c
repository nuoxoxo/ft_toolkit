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

int	fpf_route_uin(int fd, unsigned int n)
{
	char	*num;
	int		size;

	num = fpf_uitoa(n);
	size = fpf_route_str(fd, num);
	free(num);
	return (size);
}

int	fpf_count_uin(unsigned int num)
{
	int	i;

	i = 1;
	while (num >= 10)
	{
		num /= 10;
		i++;
	}
	return (i);
}

char	*fpf_uitoa(unsigned int num)
{
	char	*res;
	int		size;

	if (!num)
		return (fpf_stos("0"));
	size = fpf_count_uin(num);
	res = malloc(size + 1);
	res[size--] = 0;
	while (num)
	{
		res[size--] = num % 10 + '0';
		num /= 10;
	}
	return (res);
}
