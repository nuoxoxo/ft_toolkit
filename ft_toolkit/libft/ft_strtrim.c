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
//		1)	if (!s)	--x--> strlen(s)
//		2)	if (head + tail >= size  <---  if (head + tail == size)	

#include "ft_toolkit.h"

size_t	count_head_or_tail(char const *s, char const *charset, int i);
size_t	issep(char c, char const *charset);
size_t	len_trim(const char *s);
char	*make_empty_str(void);

char	*ft_strtrim(char const *s, char const *charset)
{
	size_t	head;
	size_t	tail;
	size_t	size;
	size_t	i;
	char	*res;

	if (!s)
		return (make_empty_str());
	size = len_trim(s);
	head = count_head_or_tail(s, charset, 1);
	tail = count_head_or_tail(s, charset, 2);
	if (!size || head + tail >= size)
		return (make_empty_str());
	res = (char *) malloc(sizeof(char) * (size - head - tail + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (head < size - tail)
		res[i++] = s[head++];
	res[i] = 0;
	return (res);
}

char	*make_empty_str(void)
{
	char	*res;

	res = (char *) malloc(sizeof(char) * 1);
	if (!res)
		return (NULL);
	res[0] = 0;
	return (res);
}

size_t	count_head_or_tail(char const *s, char const *charset, int op)
{
	size_t	size;
	size_t	i;

	i = 0;
	if (!s)
		return (i);
	size = len_trim(s);
	if (op == 1)
	{
		while (issep(s[i], charset))
			i++;
	}
	else if (op == 2)
	{
		size--;
		while (issep(s[size - i], charset))
			i++;
	}
	return (i);
}

size_t	issep(char c, char const *charset)
{
	size_t	i;

	i = -1;
	while (charset[++i])
	{
		if (charset[i] == c)
		{
			return (1);
		}
	}
	return (0);
}

size_t	len_trim(char const *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

/*

//      DRIVE

//#include "ft_strlen.c"
//#include "ft_putstr.c"
//#include "ft_putendl.c"
#include "unistd.h"
#include "string.h"
#include "stdio.h"

#define OUT     printf("\n(ctrl + c to quit)\n--\n\n")
#define ENDL    printf("\n\n")
#define LOAD    loading()

void    loading(void);

int     main(void)
{
        while (1)
        {
            int     max = 1024;
            char    s[max], charset[max];

            fflush(stdin);
            printf("enter string : ");
            fgets(s, max, stdin);
            s[ strlen(s) - 1 ] = 0;
            
	    fflush(stdin);
            printf("enter charset: ");
	    fgets(charset, max, stdin);
	    charset[ strlen(charset) - 1 ] = 0;
	    
	    LOAD;
            printf("original : \"%s\"\n", s);
	    printf("trimmed  : \"%s\"\n", ft_strtrim(s, charset));
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
