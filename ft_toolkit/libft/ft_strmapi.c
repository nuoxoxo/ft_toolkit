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

int	len_mapi(char const *s);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	size_t	i;

	if (!s || !f)
		return (NULL);
	res = (char *) malloc(sizeof(char) * (len_mapi(s) + 1));
	if (!res)
		return (NULL);
	i = -1;
	while (s[++i])
		res[i] = f(i, s[i]);
	res[i] = 0;
	return (res);
}

int	len_mapi(char const *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*

//  DRIVE

//#include "ft_tolower.c"   //  don't know how tha5 works
//#include "ft_toupper.c"
//#include "ft_putendl.c"
//#include "ft_putstr.c"
//#include "ft_strlen.c"
#include "unistd.h"
#include <string.h>
#include <stdio.h>

#define OUT     printf("\n(ctrl + c to quit)\n--\n\n")
#define ENDL    printf("\n\n")
#define OPT3    optionx3()
#define LOAD    loading()

char    lower(unsigned int i, char c);
char    upper(unsigned int i, char c);
char    rot13(unsigned int i, char c);
void    optionx3(void);
void    loading(void);

int     main(void)
{
        while (1)
        {
            int     max = 64, i;
            char    src[max], *des;

            printf("enter your string : ");
            fgets(src, max, stdin);
            src[ strlen(src) - 1 ] = 0;
            OPT3;
            fflush(stdin);
            do
            {
                printf("\nselect a function (1, 2 or 3) : ");
                scanf("%i", &i);
            }
            while (i < 1 || i > 3);
            if (i == 1) des = ft_strmapi(src, &lower);
            if (i == 2) des = ft_strmapi(src, &upper);
            if (i == 3) des = ft_strmapi(src, &rot13);
            LOAD;
            printf("source : %s\n", src);
            printf("result : %s\n", des);
            fflush(stdin);
            OUT;
        }

        return (0);
}

//      helpers

char    rot13(unsigned int i, char c)
{
        (void)  i;

        if ((c < 123 && c > 96) || (c < 91 && c > 64))
        {
            if (c > 109 || (c > 77 && c < 91))  c -= 13;
            else                                c += 13;
        }
        return (c);
}

char    upper(unsigned int i, char c)
{
        (void)  i;

        if (c < 123 && c > 96)  c -= 32;
	return (c);
}

char    lower(unsigned int i, char c)
{
        (void)  i;

        if (c >= 65 && c <= 90) c += 32;
	return (c);
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


void    optionx3(void)
{
        printf("\n1. tolower\n");
        printf("2. toupper\n");
        printf("3. rot13\n");
}

*/
