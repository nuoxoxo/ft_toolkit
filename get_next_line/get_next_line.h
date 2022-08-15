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

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "stdlib.h"
# include "unistd.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 512
# endif

char	*get_next_line(int _);
char	*fetch_bloc(int __, char *_);
char	*paste_bloc(char *__, char *_);
char	*fetch_line(char *_);
char	*regen_bloc(char *_);
char	*sch(char *_);
int		len(char *_);

//char	*stos(char *); // for solution 2

#endif
