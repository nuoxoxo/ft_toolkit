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

//	crucial fix:
//		from war machine: 
//			reverse if (!c) and if (!i). because when s is empty
//			and c is '\0' the function should not return NULL
//		from trip:
//			added cast :	` if (*s == (char) c) `
//

#include "ft_toolkit.h"

int	len_rrchr(const char *s);

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = len_rrchr(s);
	if (!c)
		return ((char *) &s[i]);
	if (!i)
		return (NULL);
	while (--i > -1)
	{
		if (s[i] == (char) c)
			return ((char *) &s[i]);
	}
	return (NULL);
}

int	len_rrchr(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*

//  DRIVE

#include <unistd.h>
#include <string.h>
#include <stdio.h>

#define OUT     printf("\n(ctrl + c to quit)\n--\n\n")
#define ENDL    printf("\n\n")
#define LOAD    loading()

void    loading(void);

int	main(void)
{
        while (1)
        {
            int     max = 64;
            char    str[max];
            char    chr;

            fflush(stdin);
            printf("str : ");
            fgets(str, max, stdin);
            fflush(stdin);
            printf("chr : ");
            chr = getchar();
            LOAD;
            str[strlen(str) - 1] = 0;
            printf("ft_strrchr	: %s\n", ft_strrchr(str, chr));
            printf("string.h	: %s\n", strrchr(str, chr));
            OUT;
        }
}

//

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
