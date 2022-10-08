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

char	*ft_strjoin_protected(char *allocated_string, char const *end)
{
	char	*res;
	int		i;
	int		j;

	res = malloc(sizeof(char) * (slen(allocated_string) + slen(end) + 1));
	if (!res)
	{
		free(allocated_string);
		return (NULL);
	}
	i = -1;
	while (allocated_string && allocated_string[++i])
		res[i] = allocated_string[i];
	j = 0;
	while (end && end[j])
		res[i++] = end[j++];
	free(allocated_string);
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
