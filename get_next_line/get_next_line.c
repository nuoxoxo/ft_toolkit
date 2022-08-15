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

#include "get_next_line.h"

//	Solution 1: Verbose

char	*get_next_line(int fd)
{
	static char	*bloc;
	char		*line;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (0);
	bloc = fetch_bloc(fd, bloc);
	if (!bloc)
		return (NULL);
	line = fetch_line(bloc);
	bloc = regen_bloc(bloc);
	return (line);
}

char	*fetch_bloc(int fd, char *bloc)
{
	char	buff[BUFFER_SIZE + 1];
	int		bytes;

	bytes = 1;
	while (bytes && !sch(bloc))
	{
		bytes = read(fd, buff, BUFFER_SIZE);
		if (bytes < 0)
			return (NULL);
		buff[bytes] = 0;
		bloc = paste_bloc(bloc, buff);
	}
	return (bloc);
}

char	*paste_bloc(char *bloc, char *buff)
{
	char	*rest;
	int		i;
	int		j;

	if (!bloc)
	{
		bloc = malloc(1);
		if (!bloc)
			return (NULL);
		bloc[0] = 0;
	}
	rest = malloc(1 + len(bloc) + len(buff));
	if (!rest)
		return (NULL);
	i = -1;
	while (bloc[++ i])
		rest[i] = bloc[i];
	j = 0;
	while (buff[j])
		rest[i ++] = buff[j ++];
	rest[i] = 0;
	free(bloc);
	return (rest);
}

char	*fetch_line(char *bloc)
{
	char	*line;
	int		i;

	if (!bloc[0])
		return (NULL);
	i = 0;
	while (bloc[i] && bloc[i] ^ 10)
		i += 1;
	line = malloc(2 + i);
	if (!line)
		return (NULL);
	i = -1;
	while (bloc[++i] && bloc[i] ^ 10)
		line[i] = bloc[i];
	if (bloc[i] && bloc[i] == 10)
		line[i++] = 10;
	line[i] = 0;
	return (line);
}

char	*regen_bloc(char *bloc)
{
	char	*rest;
	int		size;
	int		i;
	int		j;

	i = 0;
	while (bloc[i] && bloc[i] ^ 10)
		i += 1;
	if (!bloc[i])
	{
		free(bloc);
		return (NULL);
	}
	size = len(bloc) - i;
	rest = malloc(1 + size);
	if (!rest)
		return (NULL);
	j = 0;
	i += 1;
	while (bloc[i])
		rest[j++] = bloc[i++];
	rest[j] = 0;
	free(bloc);
	return (rest);
}

//	Solution 2: Golf, cannot pass norm

/*

char	*get_next_line(int fd)
{
	char	line[(int)1e6] = {};
	char	c;
	int		bytes;
	int		i;

	bytes = 1;
	i = 0;
	while (bytes)
	{
		bytes = read(fd, &c, 1);
		if (bytes < 1)
			break ;
		line[i++] = c;
		if (c == 10)
			break ;
	}
	if (!line[0])
		return (NULL);
	return (stos(line));
}

char	*stos(char *s)
{
	char	*d;
	char	*p;
	int		i;

	i = 0;
	while (s[i])
		++i;
	d = malloc(i + 1);
	p = d;
	while (*s)
		*d++ = *s++;
	*d = 0;
	return (p);
}

*/

//	Test 1

/*

#include "fcntl.h"
#include "stdio.h"
#define ss printf("---\n")

int	main(int argc, char **argv)
{
        char	*line;
	int f, i = 0;
        int T = (argc == 1) ? 0 : atoi(argv[1]);
        int L = (argc == 3) ? atoi(argv[2]) : 16;

	T = T < 8 ? T : 1;
	//if (!T) L = 8;
        if (argc == 2) {
            if (T == 3) L = 42;
            if (T == 6) L = 42;
            if (T == 0) L = 8;
            if (T == 2) L = 10;
            if (T == 4) L = 128;
            if (T == 5) L = 512;
	    if (T == 7)	L = 4;
        }
        if (T == 1) f = open("texts/MSP", O_RDONLY);
	if (T == 2) f = open("texts/RT", O_RDONLY);
        if (T == 3) f = open("texts/JG", O_RDONLY);
	if (T == 4) f = open("texts/AOC", O_RDONLY);
	if (T == 5) f = open("texts/AOC5", O_RDONLY);
	if (T == 6) f = open("texts/HEAD", O_RDONLY);
	if (T == 0) f = open("texts/ANM", O_RDONLY);
	if (T == 7) f = open("texts/NO_NL", O_RDONLY);
	ss;
        while( ++i < L + 1 ) {
            line = get_next_line(f);
            printf("# %02d: %s", i, line);
	    if (!line)
                printf("\n");
            else
                free(line);
        }
        ss;
        close(f);
        return 0;
}

*/

//	Test 2: test one case in trip

/*
#include "fcntl.h"
#include "stdio.h"
#define ss printf("---\n")
int	main()
{
	char*line;
	int f = open("trip/files/multiple_line_no_nl", O_RDONLY);
	//int f = open("trip/files/alternate_line_nl_no_nl", O_RDONLY);
	int i = 0;
	ss;
        while( ++i < 8 + 1 ) {
            line = get_next_line(f);
            printf("# %02d: %s", i, line);
	    if (!line)
                printf("\n");
            else
                free(line);
        }
        ss;
        close(f);
        return 0;

}

*/
