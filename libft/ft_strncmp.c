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

//	strange :
//		STL strncmp returns only one of 3 values (-1, 0, 1)
//		* IF it returns a diff (a[i] - o[i]) it still passes all tests
//
//	crucial fix :
//		use (unsigned char) to include \0 in comparison
//		otherwise fails test:	strncmp("test\200", "test\0", 6)

#include "ft_toolkit.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	int		d;

	if (!n)
		return (n);
	i = 0;
	while (str1[i] && str2[i] && \
		(unsigned char) str1[i] == (unsigned char) str2[i])
	{
		if (i == n - 1)
			return (0);
		i++;
	}
	d = (unsigned char) str1[i] - (unsigned char) str2[i];
	if (!d)
		return (d);
	if (d > 0)
		return (1);
	else
		return (-1);
}

/*

//  DRIVE

//#include "ft_putendl.c"
//#include "ft_putchar.c"
//#include "printf.c"
//#include "ft_putnbr.c"
#include <string.h>
#include <stdio.h>

#define OUT	printf("\n(ctrl + c to quit)\n--\n\n")
#define ENDL    printf("\n\n")
#define LOAD    loading()

void    loading(void);

int	main(void)
{
        while (1)
        {
            const int       max = 512;
            char            s1[max];
            char            s2[max];
            unsigned int    n;

            fflush(stdin);
            printf("Enter s1 : ");
            fgets(s1, max, stdin);
	    s1[ strlen(s1) - 1 ] = 0;
            
	    fflush(stdin);
            printf("Enter s2 : ");
            fgets(s2, max, stdin);
	    s2[ strlen(s2) - 1 ] = 0;
            
	    fflush(stdin);
            printf("Enter n  : ");
            scanf("%i", &n);
            
	    LOAD;
            printf("ft_strncmp : ");
            printf("%i", ft_strncmp(s1, s2, n));
            printf("\n");
            printf("strncmp    : ");
            printf("%i", strncmp(s1, s2, n));
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
