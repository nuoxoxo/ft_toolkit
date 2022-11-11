/* ************************************************************************** */
/*                                                                            */
/*                                                        ...      :::::::    */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    ... ...         :::     */
/*   By:  ______  <marvin@42.fr>                    ...  ...       :::        */
/*                                                ...........   :::           */
/*   Created: ____/__/__ __:__:__ by nuoxoxo           ...    :::             */
/*   Updated: 2022/11/11 14:39:25 by nuxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  calloc() malloc enough space for an array 
//  the array will be ( count x size ) big
//  all bits set to 0

#include "ft_toolkit.h"

/*	fix 2022	*/

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;

	if (count == 0 || size == 0)
		return (malloc(0));
	res = (void *) malloc(count * size);
	if (!res)
		return (NULL);
	ft_memset((unsigned char *) res, 0, count * size);
	return (res);
}

/*

void	*bz(void *des, size_t n);

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*p;

	p = malloc(count * size);
	if (!p)
		return (NULL);
	bz(p, count * size);
	return ((void *) p);
}

void	*bz(void *des, size_t n)
{
	unsigned char	*p;

	p = des;
	while (n--)
	{
		*(unsigned char *) p = 0;
		p++;
	}
	return (des);
}

*/

/*

//  DRIVE

//#include "ft_bzero.c"
//#include "ft_putstr.c"
//#include "ft_putendl.c"
#include <unistd.h>
#include <stdio.h>

#define OUT     printf("\n(ctrl + c to quit)\n--\n\n")
#define ENDL    printf("\n\n")
#define LOAD    loading()

void    loading(void);

int     main(void)
{
	while (1)
	{
		//unsigned char*  mem;
		void		*mem;
		size_t          size;
		size_t          count;
		//int             flag = 0;
		printf("count : ");
		scanf("%lu", &count);
		printf("size  : ");
		scanf("%lu", &size);
		mem = ft_calloc(count, size);
		LOAD;
		printf("blocks to alloc: %lu \n", count * size);
		printf("blocks starts at: %p\n", mem);
		printf("(memory is freed)\n");
		free(mem);
		fflush(stdin);
		OUT;
	}
	return (0);

}

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
