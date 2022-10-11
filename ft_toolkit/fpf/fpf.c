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

//int	print(const char *s, ...)

int	fpf(int fd, const char *s, ...)
{
	int		res;
	int		i;
	va_list	ap;

	va_start(ap, s);
	res = 0;
	i = -1;
	while (s[++i])
	{
		if (s[i] ^ 37)
		{
			res += 1;
			write(fd, & s[i], 1);
		}
		else
			res += fpf_fmt(fd, ap, s[++i]);
	}
	return (res);
}

/*
int	fpf(int fd, const char *s, ...)
{
	int		i;
	int		total;
	va_list	ap;

	i = 0;
	total = 0;
	va_start(ap, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i ++;
			total += fmt(fd, ap, s[i]);
		}
		else
			total += write(fd, &s[i], 1);
		i ++;
	}
	va_end(ap);
	return (total);
}
*/

int	fpf_len(const char *s)
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	fpf_fmt(int fd, va_list ap, const char c)
{
	int		size;

	if (c == 'c')
		size = fpf_route_chr(fd, va_arg(ap, int));
	if (c == 's')
		size = fpf_route_str(fd, va_arg(ap, char *));
	if (c == 'p')
		size = fpf_route_ptr(fd, va_arg(ap, uintptr_t));
	if (c == 'd' || c == 'i')
		size = fpf_route_dec(fd, va_arg(ap, int));
	if (c == 'u')
		size = fpf_route_uin(fd, va_arg(ap, unsigned int));
	if (c == 'x')
		size = fpf_route_hex(fd, va_arg(ap, unsigned int), "0123456789abcdef");
	if (c == 'X')
		size = fpf_route_hex(fd, va_arg(ap, unsigned int), "0123456789ABCDEF");
	if (c == '%')
		size = write(fd, & c, 1);
	return (size);
}
