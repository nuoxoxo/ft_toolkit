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

void	clr(t_list **p, void (*d)(void *));
void	pp(t_list **p, t_list *new);
t_list	*ce(void *foo);

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*new;

	if (!lst || !f)
		return (0);
	result = 0;
	while (lst != 0)
	{
		new = ce((*f)(lst->content));
		if (!new)
		{
			clr(&result, del);
			return (0);
		}
		pp(&result, new);
		lst = lst->next;
	}								
	return (result);
}

void	pp(t_list **lst, t_list *new)
{
	t_list	*ptr;

	ptr = *lst;
	if (!ptr)
	{
		*lst = new;
		return ;
	}
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = new;
}

t_list	*ce(void *foo)
{
	t_list		*p;

	p = (t_list *) malloc(sizeof(t_list));
	if (!p)
		return (NULL);
	p->content = foo;
	p->next = NULL;
	return (p);
}

void	clr(t_list **head, void (*d)(void *))
{
	t_list	*p;

	if (!*head)
		return ;
	while (*head)
	{
		p = *head;
		*head = (*head)->next;
		d(p->content);
		free(p);
	}
	return ;
}

/*

//	DRIVE

#include <string.h>
#include <stdio.h>
#include "ft_lstadd_back.c"
#include "ft_lstsize.c"
#include "ft_lstnew.c"

#define ENDL    printf("\n\n")
#define OPT3    optionx3()
#define LOAD    loading()

void	lstprint(t_list *lst);
void    *lower(void * c);
void    *upper(void * c);
void    *rot13(void * c);
void    optionx3(void);
void	dummy(void *p);
void    loading(void);

int     main(void)
{
        t_list      **head;
        char        **grid;
        int         max = 32, lot = 5, i = 0;

        if (!(head = (t_list **) malloc(sizeof(t_list))))	return (1);
	if (!(grid = (char **) malloc(sizeof(char *) * lot)))	return (1);
	if (!(grid[0] = (char *) malloc(sizeof(char) * max)))	return (1);	

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
	lstprint(*head);
	fflush(stdin);
	OPT3;
	do
	{
		printf("\nChoose function (1, 2 or 3) : ");
                scanf("%i", &i);
	}
	while (i < 1 || i > 3);
	LOAD;

	t_list		*rest = NULL;
	if (i == 1)	rest = ft_lstmap(*head, &lower, &dummy);
	if (i == 2)	rest = ft_lstmap(*head, &upper, &dummy);
	if (i == 3)	rest = ft_lstmap(*head, &rot13, &dummy);
	printf("%i\n", ft_lstsize(rest));
	lstprint(rest);
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

void    *rot13(void * c)
{
	char	*p;

	p = c;
	while (*(char *) c)
	{
		if (( *(char *) c < 123 && *(char *) c > 96) \
		|| (*(char *) c < 91 && *(char *) c > 64))
		{
			if (*(char *) c > 109 \
			||(*(char *) c > 77 && *(char *) c < 91))
				*(char *) c -= 13;
		    	else
				*(char *) c += 13;
		}
		c++;
	}
	return (p);
}

void    *upper(void * c)
{
	void	*p;

	p = c;
	while (*(char *) c)
	{
		if (*(char *) c < 123 && *(char *) c > 96)
            		*(char *) c -= 32;
		c++;
	}
	return (p);
}

void    *lower(void * c)
{
	void	*p;

	p = c;
	while (*(char *) c)
	{
		if (*(char *) c >= 65 && *(char *) c <= 90)
        	    *(char *) c += 32;
		c++;
	}
	return (p);
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

void	dummy(void *p)
{
	(void) p;
	return ;
}

*/
