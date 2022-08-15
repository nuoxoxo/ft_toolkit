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
//      	everything is size-bounded
//      	copy at most SIZE - 1 bytes, push a NUL at SIZE-th byte
//      return : len of src 
//      	( length of the string it wants to create )
//	crucial fix :
//		1) mod.	: if (!size) return src_len
//		2) mod.	: if (!size || !len_src || !len_des) ---> if (!size)

#include "ft_toolkit.h"

size_t	len_lcpy(char *s);

size_t	ft_strlcpy(char *des, const char *src, size_t size)
{
	size_t	len_src;
	size_t	i;

	len_src = len_lcpy((char *) src);
	if (!size)
	{
		if (!len_src)
			des[0] = 0;
		return (len_src);
	}
	i = 0;
	while (src[i] && i < size - 1)
	{
		des[i] = (unsigned char) src[i];
		i++;
	}
	des[i] = 0;
	return (len_src);
}

size_t	len_lcpy(char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*

//  DRIVE

#include <stdio.h>
#include <string.h>
#include <unistd.h>

#define	OUT	printf("\n(ctrl + c to quit)\n--\n\n")
#define	ENDL	printf("\n\n")
#define	LOAD	loading()

void    loading(void);

int     main(void)
{
	while (1)
        {
		const int	max = 64;
		char		des_std[max], des_usr[max], src[max];
		//size_t		res_std, res_usr, size, len_src, len_des;
		size_t		res_std, res_usr, len_src, len_des;
		int		size;

		fflush(stdin);
		printf("src : ");
		fgets(src, max, stdin);
		len_src = strlen(src);
		src[ len_src - 1 ] = 0;
		
		fflush(stdin);
		printf("des : ");
		fgets(des_std, max, stdin);
		len_des = strlen(des_std);
		des_std[ len_des - 1 ] = 0;
		
		fflush(stdin);
		printf("size : ");
		//scanf("%zi", &size);
		scanf("%i", &size);
		
		printf("\nlen(src) = %zi", len_src);
		printf("\nlen(des) = %zi\n", len_des);	
		LOAD;
		strcpy(des_usr, des_std);
		printf("-- compare return value --\n");
		//res_std = strlcpy(des_std, src, size);
		res_std = strlcpy(des_std, src, (size_t) size);
		//res_usr = ft_strlcpy(des_usr, src, size);
		res_usr = ft_strlcpy(des_usr, src, (size_t) size);
		printf("stdlib  : %zi\n", res_std);
		printf("my lib  : %zi\n\n", res_usr);
		printf("-- compare result --\n");
		printf("comp : %s\n", des_std);
		printf("user : %s\n", des_usr);
		//printf("comp : %s - %c - %c\n", des_std, des_std[1], des_std[2]);
		//printf("user : %s - %c - %c\n", des_usr, des_usr[1], des_usr[2]);
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
