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

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = (t_list *) malloc(sizeof(t_list));
	if (!lst)
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}

/*

//      DRIVE

//#include "ft_lstprint.c"
//#include "ft_putendl.c"
//#include "printf.c"
//#include "ft_strclr.c"
//#include "ft_strlen.c"
//#include "ft_putnbr.c"
//#include "ft_memcpy.c"
#include <string.h>
#include <stdio.h>

#define OUT     printf("\n(ctrl + c to quit)\n--\n\n")
#define ENDL    printf("\n\n")
#define PUTL	lstprint(t_list *lst);
#define LOAD    loading()

void	lstprint(t_list *lst);
void    loading(void);

int     main(void)
{
        while (1)
        {
            t_list	*lst;
	    int		max = 32;
	    char	s[ max ];

            fflush(stdin);
            printf("Enter content : ");
            fgets(s, max, stdin);
	    s[ strlen(s) - 1 ] = 0;
            lst = ft_lstnew(s);
            LOAD;
            lstprint(lst);
            free(lst);
            OUT;
        }
        return (0);
}

void	lstprint(t_list *lst)
{
	int	i = 0;

	while (lst)
	{
		printf("Node no. %i \n", i);
		printf("Content : \"%s\" \n", (char *) lst->content);
		lst = lst->next;
		i++;
	}
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
