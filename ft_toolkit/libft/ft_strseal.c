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

#include "ft_toolkit.h"

static int	slen(const char *s);

char	*ft_strseal(char *src, char const *end)
{
	char	*res;
	int		i;
	int		j;

	i = 0;
	j = 0;
	res = malloc(sizeof(char) * (slen(src) + slen(end) + 1));
	if (!res)
	{
		free(src);
		return (NULL);
	}
	while (src && src[i])
	{
		res[i] = src[i];
		++i;
	}
	while (end && end[j])
	{
		res[i++] = end[j++];
	}
	free(src);
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
