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

#ifndef FPF_H
# define FPF_H

# include "stdarg.h"
# include "unistd.h"
# include "stdlib.h"
# include "stdint.h"

//		Check:	cspdiuxX %

//int		print(const char *a, ...);

// int		print(const char *a, ...); // model

int		fpf(int fd, const char *s, ...);
int		fmt(int fd, va_list aa, const char a);

int		route_str(int fd, char *a);			// route s
int		route_chr(int fd, int a);			// route c

int		route_dec(int fd, int a);			// route id
int		count_dec(int a);
char	*stos(char *a);
char	*itoa(int a);

int		route_uin(int fd, unsigned int a);		// route u
int		count_uin(unsigned int a);
char	*uitoa(unsigned int a);

int		route_hex(int fd, unsigned int aa, char *a);	// route xX
int		count_hex(unsigned int a);
void	print_hex(int fd, unsigned int aa, char *a);

int		route_ptr(int fd, uintptr_t a);			// route p
int		count_ptr(uintptr_t a);
void	print_ptr(int fd, uintptr_t a);

int		len(const char *a);

#endif
