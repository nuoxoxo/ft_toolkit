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

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (*s)
	{
		f(i++, s++);
	}
}

/*

//	DRIVE

//#include "ft_tolower.c"   //  don't know how tha5 works
//#include "ft_toupper.c"
//#include "ft_putendl.c"
//#include "ft_putstr.c"

//	DRIVE AGAIN

#include <unistd.h>
#include <string.h>
#include <stdio.h>

#define OUT     printf("\n(ctrl + c to quit)\n--\n\n")
#define ENDL    printf("\n\n")
#define OPT3    optionx3()
#define LOAD    loading()

void    lower(unsigned int i, char *c);
void    upper(unsigned int i, char *c);
void    rot13(unsigned int i, char *c);
void    optionx3(void);
void    loading(void);

int     main(void)
{
        while (1)
        {
            int     max = 64, i;
            char    src[max];

            printf("enter your string : ");
            fgets(src, max, stdin);
	    src[ strlen(src) - 1 ] = 0;
            fflush(stdin);
            OPT3;
            do
            {
                printf("\nchoose a function (1, 2 or 3) : ");
                scanf("%i", &i);
            }
            while (i < 1 || i > 3);
            LOAD;
            printf("source : %s\n", src);
            if (i == 1) ft_striteri(src, &lower);
            if (i == 2) ft_striteri(src, &upper);
            if (i == 3) ft_striteri(src, &rot13);
            printf("result : %s\n", src);
            fflush(stdin);
            OUT;
        }

        return (0);
}

//      helpers

void    rot13(unsigned int i, char *c)
{
        (void)      i;

        if ((*c < 123 && *c > 96) || (*c < 91 && *c > 64))
        {
            if (*c > 109 || (*c > 77 && *c < 91))
                *c -= 13;
            else
                *c += 13;
        }
}

void    upper(unsigned int i, char *c)
{
        (void)      i;

        if (*c < 123 && *c > 96)
            *c -= 32;
}

void    lower(unsigned int i, char *c)
{
        (void)      i;

        if (*c >= 65 && *c <= 90)
            *c += 32;
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
