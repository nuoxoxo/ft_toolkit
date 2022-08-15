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

//	description:
//		memcmp doesn't stop when meeting 'NUL' (unlike strcmp)
//	fix from war machine test:
//		if (!n) means identical result

#include "ft_toolkit.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (!n)
		return (0);
	while (*(unsigned char *) s1 == *(unsigned char *) s2 && --n)
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *) s1 - *(unsigned char *) s2);
}

/*

//  DRIVE

//#include "ft_putendl.c"
//#include "ft_putstr.c"
//#include "ft_strlen.c"
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#define MSG	printf("\nTest n = 0, return 0 (i.e. identical)\n\n");
#define OUT     printf("\n(ctrl + c to quit)\n--\n\n")
#define ENDL    printf("\n\n")
#define LOAD    loading()

void    loading(void);

int     main(void)
{
	MSG;
        while (1)
        {
            int     max = 32, i;
            char    s1[max], s2[max];

            fflush(stdin);
            printf("enter string s1  : ");
            fgets(s1, max, stdin);
            s1[ strlen(s1) - 1 ] = 0;
            fflush(stdin);
            printf("enter string s2  : ");
            fgets(s2, max, stdin);
            s2[ strlen(s2) - 1 ] = 0;
            fflush(stdin);
            printf("enter range n    : ");
            scanf("%i", &i);
            LOAD;
            printf("ft_memcmp   : %i\n", ft_memcmp(s1, s2, i));
            printf("memcmp      : %i\n", memcmp(s1, s2, i));
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
