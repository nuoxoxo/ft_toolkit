/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _                                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ___ <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: ____/__/__ __:__:__ by nxu               #+#    #+#             */
/*   Updated: ____/__/__ __:__:__ by nxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_toolkit.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	size_t		i;
	size_t		j;

	if (ft_strlen(to_find) == 0)
		return ((char *)str);
	i = -1;
	while (str[++i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			j++;
			if (j == ft_strlen(to_find))
				return ((char *) & str[i]);
		}
	}
	return (0);
}

/*

//  DRIVE

#include <string.h>
#include <stdio.h>
#include "ft_strlen.c"
#include "ft_putstr.c"
#include "ft_putendl.c"

#define OUT     ft_putendl("\n(ctrl + c to quit)\n--\n")
#define ENDL    ft_putendl("\n")
#define LOAD    loading()

void    loading(void);

int	main(void)
{
        while (1)
        {
            int     max = 64;
            char    hays[max];
            char    need[max];

            fflush(stdin);
            ft_putstr("enter haystack    : ");
            fgets(hays, max, stdin);
            fflush(stdin);
            ft_putstr("enter needle      : ");
            fgets(need, max, stdin);
            LOAD;
            hays[ft_strlen(hays) - 1] = 0;
            need[ft_strlen(need) - 1] = 0;
            printf("ft_strstr result  : %s\n", ft_strstr(hays, need));
            printf("string.h result   : %s\n", strstr(hays, need));
            OUT;
        }
}

//

void    loading(void)
{
        int     rand;

        rand = 1000 * 32;
        ft_putstr("loading");
        for (int i = 12; i > 0; i--)
        {
            usleep(rand);
            ft_putstr(".");
        }
        ENDL;
}

*/
