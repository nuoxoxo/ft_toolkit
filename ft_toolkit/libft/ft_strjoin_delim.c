/* ************************************************************************** */
/*                                                                            */
/*                                                        ...      :::::::    */
/*   _                                                  ...      :::    :::   */
/*                                                    ... ...         :::     */
/*   By: nxu <marvin@42.fr>                         ...  ...       :::        */
/*                                                ...........   :::           */
/*   Created: ____/__/__ __:__:__ by nxu               ...    :::             */
/*   Updated: ____/__/__ __:__:__ by nxu              ...   ::::::::.fi       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_toolkit.h"

static int		slen(const char *s);

char	*ft_strjoin_delim(char const *left, char const *right, char *delim)
{
	char	*res;
	int		i;

	res = malloc(sizeof(char) * (slen(left) + slen(right) + slen(delim) + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (left && left[i])
	{
		res[i] = left[i];
		++i;
	}
	while (delim && delim[i - slen(left)])
	{
		res[i] = delim[i - slen(left)];
		++i;
	}
	while (right && right[i - slen(left) - slen(delim)])
	{
		res[i] = right[i - slen(left) - slen(delim)];
		++i;
	}
	res[i] = '\0';
	return (res);
}

static int	slen(const char *s)
{
	int		i;

	i = 0;
	while (s[i])
		++i;
	return (i);
}
