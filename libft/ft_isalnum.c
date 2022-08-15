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

//int	ft_isalpha(int c);
//int	ft_isdigit(int c);

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

/*

//	static

int	ft_isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
		return (1);
	return (0);
}

int	ft_isdigit(int c)
{
	if (c > '9' || c < '0')
		return (0);
	return (1);
}

*/

/*

//	DRIVE

#include <stdio.h>

int     main(void)
{
	printf("\n");
	printf("→ ctrl + v to test a control character\n");
	printf("→ œ/ç/é/â/ê/î/ô/û/à/è/ì/ò/ù/ë/ï/ü\n");
	printf("→ 東南西北金木水火土日月\n\n");
        while (1)
        {
            char    c;

            fflush(stdin);
	    printf("Enter a byte : ");
            do	scanf("%c", &c);
	    while (c == 10);
	    printf("Byte entered : %c\n", c);
	    printf("Ascii ref.   : %i\n\n", c);
            if (!ft_isalnum(c)) printf("not alnum");
            else                printf("is alnum");
	    printf("\n--\n\n");
        }
        return (0);
}

*/
