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

//	Question:
//		norminette's indent
//		ULONG_MAX  =  2^63 - 1  =  9223372036854775807
//	crucial fix :
//		none

int	is_num(char c);
int	is_wsp(char c);

int	ft_atoi(const char *s)
{
	unsigned long int	tt;
	int					sign;
	int					i;

	sign = 1;
	tt = 0;
	i = 0;
	while (is_wsp(s[i]))
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (is_num(s[i]))
	{
		tt = tt * 10 + s[i] - '0';
		if (sign > 0 && tt >= 2147483648)
			return (-1);
		if (sign < 0 && tt > 2147483648)
			return (0);
		i++;
	}
	return (sign * tt);
}

int	is_wsp(char c)
{
	if (c == ' ' || (c < 14 && c > 8))
		return (1);
	return (0);
}

int	is_num(char c)
{
	if (c <= '9' && c >= '0')
		return (1);
	return (0);
}

/*

//	DRIVE

//#include "ft_putendl.c"
//#include "printf.c"
#include <unistd.h>	// usleep
#include <stdlib.h>	// atoi
#include <stdio.h>

#define OUT     printf("\n(ctrl + c to quit)\n--\n\n")
#define ENDL    printf("\n\n")
#define LOAD    loading()

void    loading(void);
void    test_a(void);
void	test_o(void);

int     main(void)
{
        LOAD;
        test_a();
	test_o();
        LOAD;
        while (1)
        {
            int     max = 64;
            char    s[max];

            printf("enter a string : ");
            fgets(s, max, stdin);
            LOAD;
            printf("atoi --->  %d\ntest --->  %d\n\n", atoi(s), ft_atoi(s));
            OUT;
            fflush(stdin);
        }
        return (0);
}

void    test_a(void)
{
        printf("====== random tests ======\n\n");
        printf("test string: \" --+-042a:f545\"\n");
        printf("atoi --->  %d\ntest --->  %d\n\n\n",
            atoi(" --+-042a:f545"), ft_atoi(" --+-042a:f545"));
	printf("test string: \"  \\n  42t4457\"\n");
	printf("atoi --->  %d\ntest --->  %d\n\n",
            atoi("  \n  42t4457"), ft_atoi("  \n  42t4457"));
        printf("test string: \\0 1337\n");
        printf("atoi --->  %d\ntest --->  %d\n\n",
            atoi("\0 1337"), ft_atoi("\0 1337"));
        printf("test string: -0\n");
        printf("atoi --->  %d\ntest --->  %d\n\n",
            atoi("-0"), ft_atoi("-0"));
        printf("test string: \" - 1 6 7\"\n");
        printf("atoi --->  %d\ntest --->  %d\n\n",
            atoi(" - 1 6 7"), ft_atoi(" - 1 6 7"));
}

void	test_o(void)
{
	printf("test string: \"\\t---+2147483648\"\n");
        printf("atoi --->  %d\ntest --->  %d\n\n",
            atoi("\t---+2147483648"), ft_atoi("\t---+2147483648"));
        printf("test string: \"\\v2147483647\"\n");
        printf("atoi --->  %d\ntest --->  %d\n\n",
            atoi("\v2147483647"), ft_atoi("\v2147483647"));
        printf("test string: \"-2147483648\"\n");
        printf("atoi --->  %d\ntest --->  %d\n\n",
            atoi("-2147483648"), ft_atoi("-2147483648"));
}

void    loading(void)
{
        int     rand;

        rand = 1000 * 32;
        printf("loading");
        for (int i = 12; i >  0; i--)
        {
            usleep(rand);
            printf(".");
        }
        ENDL;
}

*/
