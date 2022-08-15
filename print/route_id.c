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

int	route_dec(int n)
{
	char	*num;
	int		size;

	num = itoa(n);
	size = route_str(num);
	free(num);
	return (size);
}

int	count_dec(int num)
{
	int	i;

	i = 1;
	if (num < 0)
	{
		num *= -1;
		i++;
	}
	while (num >= 10)
	{
		num /= 10;
		i++;
	}
	return (i);
}

char	*itoa(int num)
{
	char	*res;
	int		size;

	if (num == -2147483648)
		return (stos("-2147483648"));
	if (!num)
		return (stos("0"));
	size = count_dec(num);
	res = malloc(size + 1);
	if (num < 0)
	{
		num *= -1;
		res[0] = '-';
	}
	res[size--] = 0;
	while (num)
	{
		res[size--] = num % 10 + '0';
		num /= 10;
	}
	return (res);
}

char	*stos(char *s)
{
	char	*p;
	char	*d;
	int		size;

	size = len(s);
	d = malloc(size + 1);
	p = d;
	while (*s)
		*d++ = *s++;
	*d = 0;
	return (p);
}
