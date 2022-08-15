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

//	crucial fix:	1)
//			if simply return NULL -> 
//			substr does not work when start >= strlen(s) -->
//			so if start >= strlen(s), return and empty str
//			
//			2)
//			if (!s) then strlen(s) should not be applied
//			cf. alel's test :	ft_substr(NULL, 0, 12);

#include "ft_toolkit.h"

char	*create_dupli(char const *s, unsigned int start, size_t len);
char	*create_empty(void);
size_t	len_sub(char *s);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	ls;

	if (!s || !len)
		return (create_empty());
	ls = len_sub((char *) s);
	if (ls && start > ls - 1)
		return (create_empty());
	if (len >= ls - start)
		len = ls - start;
	return (create_dupli(s, start, len));
}

char	*create_dupli(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	sub = (char *) malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len)
		sub[i++] = s[start++];
	sub[i] = 0;
	return (sub);
}

char	*create_empty(void)
{
	char	*sub;

	sub = (char *) malloc(sizeof(char));
	if (!sub)
		return (NULL);
	*sub = 0;
	return (sub);
}

size_t	len_sub(char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*

//      DRIVE

//#include "ft_putendl.c"
//#include "ft_putstr.c"
//#include "strlen.c"
#include "string.h"
#include "stdio.h"

#define OUT     printf("\n(ctrl + c to quit)\n--\n\n")
#define ENDL    printf("\n\n")
#define LOAD    loading()

void    loading(void);
void	str_clr(char *s);

int     main(void)
{
        while (1)
        {
            int     max = 32, start, size;
            char    s[max];

            printf("enter string : ");
            fgets(s, max, stdin);
            s[ strlen(s) - 1 ] = 0;
            fflush(stdin);
            printf("enter start  : ");
            scanf("%i", &start);
            fflush(stdin);
            printf("enter size   : ");
            scanf("%i", &size);
            fflush(stdin);
            LOAD;
            printf("result : ");
            printf("%s\n", ft_substr(s, start, size));
	    str_clr(s);
            OUT;
        }
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

*/
