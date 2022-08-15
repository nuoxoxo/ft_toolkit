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

//int	ft_printf(const char *s, ...)

int	print(const char *s, ...)
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
			write(1, & s[i], 1);
		}
		else
			res += fmt(ap, s[++i]);
	}
	return (res);
}

int	len(const char *s)
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	fmt(va_list ap, const char c)
{
	int		size;

	if (c == 'c')
		size = route_chr(va_arg(ap, int));
	if (c == 's')
		size = route_str(va_arg(ap, char *));
	if (c == 'p')
		size = route_ptr(va_arg(ap, uintptr_t));
	if (c == 'd' || c == 'i')
		size = route_dec(va_arg(ap, int));
	if (c == 'u')
		size = route_uin(va_arg(ap, unsigned int));
	if (c == 'x')
		size = route_hex(va_arg(ap, unsigned int), "0123456789abcdef");
	if (c == 'X')
		size = route_hex(va_arg(ap, unsigned int), "0123456789ABCDEF");
	if (c == '%')
		size = write(1, & c, 1);
	return (size);
}
