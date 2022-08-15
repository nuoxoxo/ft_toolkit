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

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f || !lst)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*

//	DRIVE

#include <string.h>
#include <stdio.h>
#include "ft_lstadd_back.c"
#include "ft_lstnew.c"

#define ENDL    printf("\n\n")
#define OPT3    optionx3()
#define LOAD    loading()

//void    apply_iter(t_list *lst, int option);
void	lstprint(t_list *lst);
void    lower(void * c);
void    upper(void * c);
void    rot13(void * c);
void    optionx3(void);
void    loading(void);

int     main(void)
{
        t_list      **head;
        char        **grid;
        int         max = 32, lot = 10, i = 0, f;

        if (!(head = (t_list **) malloc(sizeof(t_list))))	return (1);
	if (!(grid = (char **) malloc(sizeof(char *) * lot)))	return (1);
	if (!(grid[0] = (char *) malloc(sizeof(char) * max)))	return (1);	
	
	fflush(stdin);
        printf("Enter content	: ");
        fgets(grid[0], max, stdin);
	grid[0][ strlen(grid[0]) - 1 ] = 0;
        *head = ft_lstnew(grid[0]);
        LOAD;
	
	while (++i < lot)
       	{
	    fflush(stdin);
	    lstprint(*head);
	    OPT3;
            do
            {
                printf("\nChoose function (1, 2 or 3) : ");
                scanf("%i", &f);
            }
            while (f < 1 || f > 3);
            LOAD;
	    if (f == 1) ft_lstiter(*head, &lower);
            if (f == 2) ft_lstiter(*head, &upper);
            if (f == 3) ft_lstiter(*head, &rot13);
	    lstprint(*head);
            
	    fflush(stdin);
	    printf("Space available	: %i \n", lot - i);
            printf("Enter content	: ");
	    if (!(grid[i] = (char*)malloc(sizeof(char) * max)))	return 1;
            fgets(grid[i], max, stdin);
            grid[i][ strlen(grid[i]) - 1 ] = 0;
            ft_lstadd_back(head, ft_lstnew(grid[i]));
        }
	lstprint(*head);
	
	i = 0;
	while (i < lot)	free(grid[i++]);
	free(grid);

	return (0);
}

//	dependencies

void	lstprint(t_list *lst)
{
	int	i = 0;

	printf("--\n");
	while (lst)
	{
		printf("Node no. %i \n", i);
		printf("Content : \"%s\" \n", (char *) lst->content);
		lst = lst->next;
		i++;
	}
	printf("--\n\n");
}

void    apply_iter(t_list *lst, int i)
{
        if (i == 1) ft_lstiter(lst, &lower);
        if (i == 2) ft_lstiter(lst, &upper);
        if (i == 3) ft_lstiter(lst, &rot13);
}

void    rot13(void * c)
{
	while (*(char *) c)
	{
		if (( *(char *) c < 123 && *(char *) c > 96) \
		|| (*(char *) c < 91 && *(char *) c > 64))
		{
		    if (*(char *) c > 109 || \
			(*(char *) c > 77 && *(char *) c < 91))
			*(char *) c -= 13;
		    else
			*(char *) c += 13;
		}
		c++;
	}
}

void    upper(void * c)
{
	while (* (char *) c)
	{
		if (*(char *) c < 123 && *(char *) c > 96)
            		*(char *) c -= 32;
		c++;
	}
}

void    lower(void * c)
{
	while (* (char *) c)
	{
		if (*(char *) c >= 65 && *(char *) c <= 90)
        	    *(char *) c += 32;
		c++;
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

void    optionx3(void)
{
        printf("1. tolower\n");
        printf("2. toupper\n");
        printf("3. rot13\n");
}

*/
