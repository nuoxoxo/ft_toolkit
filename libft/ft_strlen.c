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

size_t	ft_strlen(const char *s)
{
	size_t	i;

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

int     main(void)
{
        const int   max = 128;
        while (1)
        {
            char    s[max];

            fflush(stdin);
	    printf("Enter a phrase : ");
            fgets(s, max, stdin);
            s[ strlen(s) - 1 ] = 0;
            fflush(stdin);
            LOAD;
            printf("strlen : ");
            printf("%zu\n", strlen(s));
            OUT;
        }

        return (0);
}

void    loading(void)
{
        int     rand;

        rand = 1000 * 16;
       	printf("printing");
        for (int i = 12; i > 0; i--)
        {
            usleep(rand);
            printf(".");
        }
        ENDL;
}

*/
