#include "ft_toolkit.h"

char	*ft_strjoin_delim(char const *s, char const *s2, char *sep)
{
	char	*result;
	size_t	i;

	i = 0;
	result = ft_calloc(sizeof(char),
			(ft_strlen(s) + ft_strlen(sep) + ft_strlen(s2) + 1));
	if (!result)
		return (NULL);
	while (s && s[i])
	{
		result[i] = s[i];
		i ++;
	}
	while (sep && sep[i - ft_strlen(s)])
	{
		result[i] = sep[i - ft_strlen(s)];
		i ++;
	}
	while (s2 && s2[i - ft_strlen(s) - ft_strlen(sep)])
	{
		result[i] = s2[i - ft_strlen(s) - ft_strlen(sep)];
		i ++;
	}
	result[i] = '\0';
	return (result);
}