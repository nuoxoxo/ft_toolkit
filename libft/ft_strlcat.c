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

//      how it works :
//      	appends at most SIZE - 1 bytes (size-bounded concat)
//      	pushes NUL at SIZE-th byte
//      return :
//      	if len(des) > = SIZE:
//      		1)	nothing to cat
//      		2)	length:	len(src) + SIZE
//	if len(des) < SIZE:
//      		1)	append at most src[i] && SIZE - 1, seal w/ \0
//      		2)	length:	len(src) + len(des)

#include "ft_toolkit.h"

size_t	len_lcat(const char *s);

size_t	ft_strlcat(char *des, const char *src, size_t size)
{
	size_t	len_des;
	size_t	len_src;
	size_t	i;
	size_t	j;

	len_des = len_lcat(des);
	len_src = len_lcat(src);
	if (len_des >= size)
		return (size + len_src);
	i = len_des;
	j = 0;
	while (src[j] && i + j < size - 1)
	{
		des[i + j] = src[j];
		j++;
	}
	des[i + j] = 0;
	return (len_des + len_src);
}

size_t	len_lcat(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*

//  DRIVE

#include <unistd.h>
#include <string.h>
#include <stdio.h>

#define	OUT	printf("\n(ctrl + c to quit)\n--\n\n")
#define	ENDL	printf("\n\n")
#define	LOAD	loading()

void    loading(void);

int     main(void)
{
        while (1)
	{
		const int   max = 64;
		char        des_std[max], des_usr[max], src[max];
		size_t      res_std, res_usr, size, len_src, len_des;

		fflush(stdin);
		printf("src : ");
		fgets(src, max, stdin);
		src[ strlen(src) - 1 ] = 0;
		len_src = strlen(src);
		
		fflush(stdin);
		printf("des : ");
		fgets(des_std, max, stdin);
		des_std[ strlen(des_std) - 1 ] = 0;
		len_des = strlen(des_std);
		
		fflush(stdin);
		printf("size : ");
		scanf("%zi", &size);
		LOAD;
		
		printf("len(src) = %zi\n", len_src);
		printf("len(des) = %zi\n\n", len_des);
		strcpy(des_usr, des_std);
		printf("-- compare return value --\n");
		
		res_std = strlcat(des_std, src, size);
		res_usr = ft_strlcat(des_usr, src, size);
		printf("stdlib  : %zi\n", res_std);
		printf("my lib  : %zi\n\n", res_usr);
		printf("-- compare result --\n");
		printf("stdlib  : %s\n", des_std);
		printf("my lib  : %s\n", des_usr);
		OUT;
	}
        return (0);
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
