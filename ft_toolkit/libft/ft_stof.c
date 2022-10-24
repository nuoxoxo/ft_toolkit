/* ************************************************************************** */
/*                                                                            */
/*                                                        ...      :::::::    */
/*   ft_stof.c                                          :+:      :+:    :+:   */
/*                                                    ... ...         :::     */
/*   By: nxu <marvin@42.fr>                         ...  ...       :::        */
/*                                                ...........   :::           */
/*   Created: ____/__/__ __:__:__ by nxu               ...    :::             */
/*   Updated: 2022/10/24 16:27:42 by nuxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_toolkit.h"

double	ft_stof_helper(const char *s);
double	ft_stof(const char *s);

double	ft_stof(const char *s)
{
	int		factor;

	factor = 1;
	if (*s == '-')
	{
		++s;
		factor = -1;
	}
	else if (*s == '+')
		++s;
	return (factor * ft_stof_helper(s));
}

//

double	ft_stof_helper(const char *s)
{
	double		val;
	int			i;
	int			flag;

	i = 0;
	val = 0;
	flag = 0;
	while (*s && val < 1e6)
	{
		if (*s != '.')
		{
			val = (val * 10) + (*s - '0');
			if (flag == 1)
				--i;
		}
		else
		{
			if (flag == 1)
				return (0);
			flag = 1;
		}
		++s;
	}
	return (val * ft_pow(10, i));
}

int	ft_stof_checker(const char *s)
{
	int		i;

	i = 0;
	if (s[i] == '-' || s[i] == '+')
		++i;
	if (s[i] < '0' || s[i] > '9')
		return (0);
	++i;
	if (s[i] == '.')
		++i;
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		++s;
	}
	return (1);
}

/*
double	ft_stof(const char* s)
{
	double	factor;
	double	res;
	int		dcp;
	double		d;
	res = 0;
	factor = 1;
	if (*s == '-')
	{
		++s;
		factor = -1;
	}
	dcp = 0;
	while (*s)
	{
		if (*s == '.')
		{
			dcp = 1;
			continue ;
		}
		d = *s - '0';
		printf("Hi from stof : d = %d \n", d);
		if (d < 10 && d > -1)
		{
			if (dcp)
				factor /= 10.0f;
			res = res * 10.0f + (double) d;
		}
		printf("Hi from stof : d = %f \n", res);
		++s;
	}
	return (res * factor);
}
*/
