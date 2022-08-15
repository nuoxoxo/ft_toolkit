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

//	crucial fix from unit test:
//	segfault if des || src is NUL
//	but returns NULL if both des && src are NUL

#include "ft_toolkit.h"

void	*ft_memcpy(void *restrict des, const void *restrict src, size_t n)
{
	unsigned char	*ptr;

	if (!src && !des)
		return (NULL);
	ptr = des;
	while (n)
	{
		*(unsigned char *) ptr = *(unsigned char *) src;
		ptr++;
		src++;
		n--;
	}
	return (des);
}

/*

//      DRIVE

#define OUT     printf("\n(ctrl + c to quit)\n--\n\n")
#define ENDL    printf("\n\n")
#define LOAD    loading()

//#include "ft_putendl.c"
//#include "ft_strlen.c"
#include <string.h>
#include <unistd.h>
#include <stdio.h>


void    loading(void);

int     main(void)
{
        while (1)
        {
            int     max = 32, i;
            char    s1[max], s2[max];

            fflush(stdin);
	    printf("enter s1 : ");
            fgets(s1, max, stdin);
            s1[ strlen(s1) - 1 ] = 0;
            
	    fflush(stdin);
            printf("enter s2 : ");
	    fgets(s2, max, stdin);
            s2[ strlen(s2) - 1 ] = 0;
          
	    fflush(stdin);
            printf("enter n  : ");
            scanf("%i", &i);	LOAD;
            printf("ft_memcpy   : %s\n", (char *) ft_memcpy(s1, s2, i));
            printf("memcpy      : %s\n", (char *) memcpy(s1, s2, i));
            OUT;
        }
        return (0);
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
