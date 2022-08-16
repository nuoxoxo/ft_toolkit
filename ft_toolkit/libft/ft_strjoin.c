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

//	crucial fix :
//		malloc(sizeof(char *)) <---- xxx

#include "ft_toolkit.h"

int		len_join(char *s);
char	*cat(char *des, char *src);
char	*cpy(char *des, char *src);

char	*ft_strjoin(char const *prefix, char const *suffix)
{
	int		size;
	char	*res;

	if (!prefix)
		return (0);
	if (!suffix)
		return ((char *) prefix);
	size = len_join((char *) prefix) + len_join((char *) suffix) + 1;
	res = (char *) malloc(sizeof(char) * size);
	if (!res)
		return (0);
	cpy(res, (char *) prefix);
	cat(res, (char *) suffix);
	return (res);
}

char	*cat(char *des, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (des[i])
		i++;
	while (src[j])
	{
		des[i + j] = src[j];
		j++;
	}
	des[i + j] = 0;
	return (des);
}

char	*cpy(char *des, char *src)
{
	char	*tmp;

	tmp = des;
	while (*src)
		*tmp++ = *src++;
	*tmp = 0;
	return (des);
}

int	len_join(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*

//      DRIVE

//#include "ft_putendl.c"
//#include "printf.c"
//#include "ft_strlen.c"
//#include "ft_strcpy.c"
//#include "ft_strcat.c"
#include "unistd.h"
#include "string.h"
#include "stdlib.h"
#include "stdio.h"

#define OUT     printf("\n(ctrl + c to quit)\n--\n\n")
#define ENDL    printf("\n\n")
#define LOAD    loading()

void	str_clr(char *s);
void    loading(void);

int     main(void)
{
        while (1)
        {
            int     max = 64;
            char    prefix[max], suffix[max], *s;

            fflush(stdin);
            printf("Enter the left part  : ");
            fgets(prefix, max, stdin);
            prefix[ strlen(prefix) - 1 ] = 0;
            
	    fflush(stdin);
            printf("Enter the right part : ");
            fgets(suffix, max, stdin);
            suffix[ strlen(suffix) - 1 ] = 0;
            
	    LOAD;
            s = ft_strjoin(prefix, suffix);
            printf("%s\n", s);
	    str_clr(s);
            OUT;
        }
}

void    loading(void)
{
        int     rand;

        rand = 1000 * 32;
        printf("loading");
        for (int i = 12; i > 0; i--)
        {
            usleep(rand);
            printf(".");
        }
        ENDL;
}

void	str_clr(char *s)
{
	if (!s)
		return ;
	while (*s)
	{
		*s = 0;
		s++;
	}
}

*/
