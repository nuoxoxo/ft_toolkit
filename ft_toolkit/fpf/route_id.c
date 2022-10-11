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

int	fpf_route_dec(int fd, int n)
{
	char	*num;
	int		size;

	num = fpf_itoa(n);
	size = fpf_route_str(fd, num);
	free(num);
	return (size);
}

int	fpf_count_dec(int num)
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

char	*fpf_itoa(int num)
{
	char	*res;
	int		size;

	if (num == -2147483648)
		return (fpf_stos("-2147483648"));
	if (!num)
		return (fpf_stos("0"));
	size = fpf_count_dec(num);
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

char	*fpf_stos(char *s)
{
	char	*p;
	char	*d;
	int		size;

	size = fpf_len(s);
	d = malloc(size + 1);
	p = d;
	while (*s)
		*d++ = *s++;
	*d = 0;
	return (p);
}
