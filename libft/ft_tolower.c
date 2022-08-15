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

int	ft_tolower(int c)
{
	if (c <= 'Z' && c >= 'A')
		c += 'a' - 'A';
	return (c);
}

/*

//	DRIVE

#include <stdio.h>

int     main(void)
{
        
        while (1)
        {
	    char	c;

            printf("Enter a char : ");
            do	scanf("%c", &c);
	    while (c == 10);
            printf("char lowered : ");
            printf("%c\n", ft_tolower(c));
            fflush(stdin);
	    printf("--\n\n");
        }
}

*/
