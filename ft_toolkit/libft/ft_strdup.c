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
//		del ` if (!src) return (NULL); ` to allow segfault on !param

#include <stdlib.h>
#include <unistd.h>

int	len_dup(char *s);

char	*ft_strdup(const char *src)
{
	char	*ptr;
	char	*des;
	int		size;

	size = len_dup((char *) src);
	des = malloc(sizeof(char) * (size + 1));
	if (!des)
		return (NULL);
	ptr = des;
	while (*src)
		*des++ = *src++;
	*des = 0;
	return (ptr);
}

int	len_dup(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*

//	DRIVE

#define OUT	printf("\n(ctrl + c to quit)\n--\n\n")
#define ENDL    printf("\n\n")
#define LOAD    loading()

#include <string.h> // strlen
#include <stdio.h>

void    loading(void);

int     main()
{
        const int   max = 512;

	while (1)
        {
            char    src[max];
            char    *des;

            printf("Enter something : ");
            fgets(src, max, stdin);
            src[ strlen(src) - 1 ] = 0;
            LOAD;
            des = ft_strdup(src);
            printf("strdup : ");
            printf("%s\n", des);
            OUT;
            fflush(stdin);
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
