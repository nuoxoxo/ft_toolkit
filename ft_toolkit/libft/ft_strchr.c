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
//		alel:
//			1) man: if c is O, strchr locates the terminating O
//			2) deleted ` if (!s) return O; ` to allow segfault
//		trip:
//			KO unit test with 't' + 256 as char
//			--> use cast:	(s[i] == (char) c)

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = -1;
	while (s[++i])
	{
		if (s[i] == (char) c)
			return ((char *) &s[i]);
	}
	if (!c)
		return ((char *) &s[i]);
	return (0);
}

/*

//  DRIVE

#include <unistd.h>
#include <string.h>
#include <stdio.h>

#define OUT     printf("\n(ctrl + c to quit)\n--\n\n")
#define ENDL    printf("\n\n")
#define LOAD    loading()

void    loading(void);

int	main(void)
{
        while (1)
        {
            int     max = 64;
            char    str[max];
            char    chr;

            fflush(stdin);
            printf("str : ");
            fgets(str, max, stdin);
            fflush(stdin);
            printf("chr : ");
            chr = getchar();
            LOAD;
            str[strlen(str) - 1] = 0;
            printf("ft_strchr  : %s\n", ft_strchr(str, chr));
            printf("string.h   : %s\n", strchr(str, chr));
            OUT;
        }
}

//

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
