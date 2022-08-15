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

//	memmove copies n chars from src to des
//	memmove is safer than memcpy (bc. src and des sometimes overlap)
//	crucial fix:
//		allow segfault on null params

#include "ft_toolkit.h"

void	*ft_memmove(void *des, const void *src, size_t len)
{
	void	*ptr;

	if (!len || des == src)
		return (des);
	ptr = des;
	if (ptr < src)
	{
		while (len)
		{
			*(unsigned char *) des++ = *(unsigned char *) src++;
			len--;
		}
	}
	else
	{
		des += len - 1;
		src += len - 1;
		while (len)
		{
			*(unsigned char *) des-- = *(unsigned char *) src--;
			len--;
		}
	}
	return (ptr);
}

/*

//      DRIVE

//#include "ft_putendl.c"
//#include "printf.c"
//#include "ft_strlen.c"
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
            scanf("%i", &i);
            LOAD;
            printf("ft_memmove  : %s\n", (char *) ft_memmove(s1, s2, i));
            printf("memmove     : %s\n", (char *) memmove(s1, s2, i));
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
