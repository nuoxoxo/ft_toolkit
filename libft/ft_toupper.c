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

int	ft_toupper(int c)
{
	if (c <= 'z' && c >= 'a')
		c -= 'a' - 'A';
	return (c);
}

/*

//	DRIVE

#include <stdio.h>

int     main(void)
{
        char	c;

        while (1)
        {
            printf("Enter a char : ");
            do	scanf("%c", &c);
	    while (c == 10);
            printf("char uppered : %c\n", ft_toupper(c));
            printf("--\n\n");
            fflush(stdin);
        }
}

*/
