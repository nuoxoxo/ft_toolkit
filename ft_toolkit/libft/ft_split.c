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
//		in fill_grid() deleted lines:
//
//			grid[i] = (char *) malloc(sizeof(char) * 1);
//			if (!grid[i])
//				return ;
//			grid[i] = 0;

#include "ft_toolkit.h"

void	fill_grid(char **grid, int size, const char *s, char c);
char	*fill_row(char *row, char const *s, int index, int offset);
int		get_offset(char const *s, int index, char c);
int		get_size(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**grid;
	int		size;

	size = get_size(s, c);
	grid = (char **) malloc(sizeof(char *) * (size + 1));
	if (!grid)
		return (NULL);
	fill_grid(grid, size, s, c);
	return (grid);
}

void	fill_grid(char **grid, int size, const char *s, char c)
{
	int		offset;
	int		i;
	int		j;

	i = -1;
	j = -1;
	while (++i < size)
	{
		while (s[++j])
		{
			if (s[j] && s[j] != c)
			{
				offset = get_offset(s, j, c);
				grid[i] = fill_row(grid[i], s, j, offset);
				j += offset;
				break ;
			}
		}
	}
	grid[i] = 0;
}

char	*fill_row(char *row, char const *s, int index, int offset)
{
	int		i;

	row = (char *) malloc(sizeof(char) * (offset + 1));
	if (!row)
		return (NULL);
	i = -1;
	while (++i < offset)
		row[i] = s[index + i];
	row[i] = 0;
	return (row);
}

int	get_offset(char const *s, int index, char c)
{
	int		size;
	int		i;

	size = 0;
	i = index - 1;
	while (s[++i] && s[i] != c)
		size++;
	return (size);
}

int	get_size(char const *s, char c)
{
	int		offset;
	int		size;
	int		i;

	if (!s)
		return (0);
	size = 0;
	i = -1;
	while (s[++i])
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			size += 1;
			offset = get_offset(s, i, c);
			i += offset;
			break ;
		}
		if (!s[i])
			break ;
	}
	return (size);
}

/*

// DRIVE

//#include "ft_isprint.c"
//#include "ft_putendl.c"
//#include "ft_putstr.c"
//#include "ft_strclr.c"
//#include "ft_strlen.c"
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#define OUT     printf("\n(ctrl + c to quit)\n--\n\n")
#define ENDL    printf("\n\n")
#define LOAD    loading()

void    loading(void);

int     main(void)
{
	//int i = 3; while (i--)	// try 3 times
        while (1)			// try infinitely
	{
            int     max = 256, i = 0;
            char    s[max], c;
            char    **grid;

            fflush(stdin);
            printf("Enter separator  : ");
            c = getchar();
            fflush(stdin);
            printf("Enter string     : ");
            fgets(s, max, stdin);
            s[ strlen(s) - 1 ] = 0;
	    printf("input is:\n");
	    printf("	s = \"%s\"\n", s);
	    printf("	c = \"%c\"\n", c);
            grid = ft_split(s, c);
            LOAD;
            while (grid[i]) printf("\"%s\"\n", grid[i++]);
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
