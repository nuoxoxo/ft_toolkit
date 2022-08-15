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

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
		write(fd, s++, 1);
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
		int     f, max = 64;
		char	s[max];

		fflush(stdin);
		printf("enter string	: ");
		fgets(s, max, stdin);
		s[len(s) - 1] = 0;
		fflush(stdin);
		printf("fd (0 1 2)	: ");
		scanf("%i", &f);
		fflush(stdin);
		write(1, res, len(res));
		ft_putstr_fd(s, f);
		fflush(stdin);
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
