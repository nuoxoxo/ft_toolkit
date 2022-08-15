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
//		return ( ft_strdup("0") ) ;

#include "ft_toolkit.h"

char	*strdup_itoa(const char *src);
int		count_digit(long n);
int		len_itoa(char *s);

char	*ft_itoa(int n)
{
	char	*res;
	long	num;
	int		len;

	num = n;
	if (num == -2147483648)
		return (strdup_itoa("-2147483648"));
	len = count_digit(num);
	if (!len)
		return (strdup_itoa("0"));
	res = (char *) malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		res[0] = '-';
	}
	res[len--] = 0;
	while (n)
	{
		res[len--] = n % 10 + '0';
		n /= 10;
	}
	return (res);
}

int	count_digit(long n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i += 1;
	}
	while (n)
	{
		n /= 10;
		i += 1;
	}
	return (i);
}

char	*strdup_itoa(const char *src)
{
	char	*ptr;
	char	*des;
	int		size;

	size = len_itoa((char *) src);
	des = malloc(sizeof(char) * (size + 1));
	if (!des)
		return (NULL);
	ptr = des;
	while (*src)
		*des++ = *src++;
	*des = 0;
	return (ptr);
}

int	len_itoa(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*

//  DRIVE

#define OUT     printf("\n(ctrl + c to quit)\n--\n\n")
#define ENDL    printf("\n\n")
#define LOAD    loading()

//#include "ft_putendl.c"
//#include "ft_putstr.c"
#include <stdio.h>
#include <errno.h>
#include <string.h>	// strerror dependency

void    loading(void);

int     main(void)
{

        while (1)
        {
            int		num;
            int		fd;

            fflush(stdin);
            printf("enter an int : ");
            fd = scanf("%i", &num);
            LOAD;
            if (fd == 1)
                printf("testing itoa : %s\n", ft_itoa(num));
            else
                printf("\n%s\nPlease try again ...\n", strerror(errno));
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
