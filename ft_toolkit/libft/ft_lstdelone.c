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

//      free the memory p->content w. del()
//      free the the ptr itself w. free()
//      next must not be freed 

#include "ft_toolkit.h"

void	ft_lstdelone(t_list *lst, void (*d) (void *))
{
	if (!lst || !d)
		return ;
	d(lst->content);
	free(lst);
	lst = NULL;
}

//	test still segfault

/*	

//	DRIVE

#include <string.h>
#include <stdio.h>
#include "ft_lstadd_back.c"
#include "ft_lstnew.c"

#define ENDL    printf("\n\n")
#define LOAD    loading()

void	lstprint(t_list *lst);
void	del_strclr(void *s);
void    loading(void);

int	main(void)
{
        t_list      **head, *p;
        char        **grid;
        int         max = 32, lot = 5, i = 0, n;

        if (!(head = (t_list **) malloc(sizeof(t_list))))	return (1);
	if (!(grid = (char **) malloc(sizeof(char *) * lot)))	return (1);
	if (!(grid[0] = (char *) malloc(sizeof(char) * max)))	return (1);	
	//p = NULL;

	fflush(stdin);
	printf("enter content (%i): ", i + 1);
	fgets(grid[0], max, stdin);
	grid[0][ strlen(grid[0]) - 1 ] = 0;
	*head = ft_lstnew(grid[0]);
	while (++i < lot)
	{
		fflush(stdin);
		printf("enter content (%i): ", i + 1);
		if (!(grid[i] = (char*)malloc(sizeof(char) * max)))
			return 1;
            	fgets(grid[i], max, stdin);
            	grid[i][ strlen(grid[i]) - 1 ] = 0;
            	ft_lstadd_back(head, ft_lstnew(grid[i]));
	}
	printf("\nBefore: ");
	lstprint(*head);
	fflush(stdin);
	do
	{
		printf("\n\nChoose a node to clear : ");
                scanf("%i", &n);
	}
	while (n < 1 || n > lot);
	
	//--n;
	p = *head;
	while (--n)
	{
		*head = (*head)->next;
		printf("%s\n", (char *) ((*head)->content));
	}
	ft_lstdelone(*head, del_strclr);
	printf("\nAfter: ");
	lstprint(p);


}

//	dependencies

void	del_strclr(void *s)
{
	if (!s)
		return ;
	while (*(char *) s)
	{
		*(char *) s = 0;
		s++;
	}
}

void	lstprint(t_list *lst)
{
	int	i = 0;

	printf("--\n");
	while (lst && (char *)lst->content)
	{
		printf("Node no. %i \n", i);
		printf("Content : \"%s\" \n", (char *) lst->content);
		if (!(lst->next))
			return ;
		lst = lst->next;
		i++;
	}
	printf("--\n\n");
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
