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

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*

//  DRIVE

#include <stdio.h>

int	len(char *s);

int     main(void)
{
	char	*use = "\n(suggested fd: 0, 1 or 2)";
	char	*res = "\nft_putchar_fd: ";
	char    c;
	int     f;

	while (1)
	{
		fflush(stdin);
		printf("enter char : ");
		scanf("%c", &c);
		fflush(stdin);
		printf("fd (0 1 2) : ");
		scanf("%i", &f);
		write(1, res, len(res));
		ft_putchar_fd(c, f);
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
