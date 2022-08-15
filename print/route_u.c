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

int	route_uin(unsigned int n)
{
	char	*num;
	int		size;

	num = uitoa(n);
	size = route_str(num);
	free(num);
	return (size);
}

int	count_uin(unsigned int num)
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

char	*uitoa(unsigned int num)
{
	char	*res;
	int		size;

	if (!num)
		return (stos("0"));
	size = count_uin(num);
	res = malloc(size + 1);
	res[size--] = 0;
	while (num)
	{
		res[size--] = num % 10 + '0';
		num /= 10;
	}
	return (res);
}
