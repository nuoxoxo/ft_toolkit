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

void	ft_putnbr_fd(int num, int fd)
{
	char	c;

	if (num == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (num < 0)
	{
		write(fd, "-", 1);
		num *= -1;
	}
	if (num / 10)
		ft_putnbr_fd(num / 10, fd);
	c = num % 10 + '0';
	write(fd, &c, 1);
}

/*

//  DRIVE

#include <stdio.h>

int	len(char *s);

int     main(void)
{
	char	*use = "\n(suggested fd: 0, 1 or 2)";
	char	*res = "\nresult: ";

	while (1)
	{
		int     f, i;

		fflush(stdin);
		printf("an int	: ");
		scanf("%i", &i);
		fflush(stdin);
		printf("an fd	: ");
		scanf("%i", &f);
		write(1, res, len(res));
		ft_putnbr_fd(i, f);
		if (f < 0 || f > 2)	write(1, use, len(use));
		printf("\n--\n\n");
	}
}

int	len(char *s)
{
	int	i = 0;

	if (!s)		return (0);
	while(s[i])	i++;
	return (i);
}

*/
