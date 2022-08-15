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

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*

//      DRIVE

#include <string.h>
#include <stdio.h>
#include "ft_lstnew.c"

#define OUT     printf("\n(ctrl + c to quit)\n--\n\n")
#define ENDL    printf("\n\n")
#define LOAD    loading()

void	lstprint(t_list *lst);
void    loading(void);

int     main(void)
{
        t_list      **head;
        int         max = 32, lot = 5, i = 0;
        char        **grid;

        if (!(head = (t_list **) malloc(sizeof(t_list))))	return (1);
	if (!(grid = (char **) malloc(sizeof(char *) * 10)))	return (1);
	if (!(grid[0] = (char *) malloc(sizeof(char) * max)))	return (1);
	
	fflush(stdin);
        printf("Enter content	: ");
        fgets(grid[0], max, stdin);
	grid[0][ strlen(grid[0]) - 1 ] = 0;
        *head = ft_lstnew(grid[0]);
	
	while (++i < lot)
        {
            if (!(grid[i] = (char *)malloc(sizeof(char)*max)))	return (1);
            LOAD;
	    lstprint(*head);
            OUT;
	    fflush(stdin);
	    printf("Space available	: %i \n", lot - i);
            printf("Enter content	: ");
            fgets(grid[i], max, stdin);
            grid[i][ strlen(grid[i]) - 1 ] = 0;
            ft_lstadd_front(head, ft_lstnew(grid[i]));
        }
	lstprint(*head);
	
	i = 0;
	while (i < 5)	free(grid[i++]);
	free(grid);
        return (0);
}

void	lstprint(t_list *lst)
{
	int	i = 0;

	printf("\n--\n");
	while (lst)
	{
		printf("Node no. %i \n", i);
		printf("Content : \"%s\" \n", (char *) lst->content);
		lst = lst->next;
		i++;
	}
	printf("--\n");
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
