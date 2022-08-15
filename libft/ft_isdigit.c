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

int	ft_isdigit(int c)
{
	if (c > '9' || c < '0')
		return (0);
	return (1);
}

/*

//	DRIVE

#include <stdio.h>

int     main(void)
{
	printf("\n");
	printf("ctrl + v to test a control character\n");
	printf("œ/ç/é/â/ê/î/ô/û/à/è/ì/ò/ù/ë/ï/ü\n");
	printf("東南西北金木水火土日月\n\n");
        while (1)
        {
            char    c;

	    printf("Enter a byte : ");
            do	scanf("%c", &c);
	    while (c == 10);
	    printf("Byte entered : %c\n", c);
	    printf("Ascii ref.   : %i\n\n", c);
            if (!ft_isdigit(c)) printf("not digit");
            else                printf("is digit");
	    printf("\n--\n\n");
            fflush(stdin);
        }
        return (0);
}

*/
