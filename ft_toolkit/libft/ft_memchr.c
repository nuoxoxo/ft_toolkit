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
//	while (i < n)  <---  while (*p && i < n)
//	in order to include NUL in comparison

#include "ft_toolkit.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (*(unsigned char *) p == (unsigned char) c)
			return (p);
		p++;
		i++;
	}
	return (NULL);
}

/*

//  DRIVE

//#include "ft_putendl.c"
//#include "ft_putstr.c"
//#include "ft_strlen.c"
//#include "ft_bzero.c"
#include <string.h>
#include <stdio.h>

#define OUT     printf("\n(ctrl + c to quit)\n--\n\n")
#define ENDL    printf("\n\n")
#define LOAD    loading()

void    loading(void);

int     main(void)
{
        while (1)
        {
	    int		max = 64, i;
	    char	s[ max ], c;

	    fflush(stdin);
            printf("enter string : ");
            fgets(s, max, stdin);
            s[ strlen(s) - 1 ] = 0;

	    fflush(stdin);
	    printf("enter a char : ");
            scanf("%c", &c);

            fflush(stdin);            
	    printf("enter a size : ");
            scanf("%i", &i);

	    LOAD;
            printf("ft_memchr : %s\n", ft_memchr(s, c, i));
            printf("memchr    : %s\n", memchr(s, c, i));
            //ft_bzero(s, 0);
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

*/
