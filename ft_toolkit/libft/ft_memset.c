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

#include "ft_toolkit.h"

void	*ft_memset(void *des, int c, size_t n)
{
	unsigned char	*p;

	p = des;
	while (n--)
	{
		*(unsigned char *) p = (unsigned char) c;
		p++;
	}
	return (des);
}

/*

//#include "ft_putendl.c"
//#include "printf.c"
//#include "ft_strlen.c"
#include "unistd.h"
#include "string.h"
#include "stdio.h"

#define OUT     printf("\n(ctrl + c to quit)\n--\n\n")
#define ENDL    printf("\n\n")
#define LOAD    loading()

void    loading(void);

int     main(void)
{
        while (1)
        {
	    int		max = 1024, i;
            char	s[max], copy[max], c;

            fflush(stdin);
            printf("string : ");
            fgets(s, max, stdin);
            fflush(stdin);
            s[ strlen(s) - 1 ] = 0;
	    printf("char   : ");
	    c = getchar();
	    fflush(stdin);
	    printf("size   : ");
	    scanf("%i", &i);
	    fflush(stdin);
	    LOAD;
	    strcpy(copy, s);
            //printf("words typed  : ");
            //printf("%s\n", s);
            //printf("address: %p\n", &s);
            printf("ft_memset : ");
            ft_memset(s, c, i);
            printf("%s\n", s);
            printf("memset    : ");
            memset(copy, c, i);
            printf("%s\n", copy);
            //printf("address: %p\n", &s);
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
