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

#include <stdlib.h>
#include <unistd.h>

int	len_dup(char *s);

char	*ft_strndup(const char *src, int n)
{
	char	*ptr;
	char	*des;
	int		size;
	int		i;

	size = len_dup((char *) src);
	if (size < n)
		des = malloc(sizeof(char) * (size + 1));
	else
		des = malloc(sizeof(char) * (n + 1));
	if (!des)
		return (NULL);
	i = 0;
	ptr = des;
	while (*src && i < n)
	{
		*des++ = *src++;
		i++;
	}
	*des = 0;
	return (ptr);
}

int	len_dup(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
