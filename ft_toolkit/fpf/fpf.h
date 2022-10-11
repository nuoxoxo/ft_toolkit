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
int		fpf_fmt(int fd, va_list aa, const char a);

int		fpf_route_str(int fd, char *a);			// route s
int		fpf_route_chr(int fd, int a);			// route c

int		fpf_route_dec(int fd, int a);			// route id
int		fpf_count_dec(int a);
char	*fpf_stos(char *a);
char	*fpf_itoa(int a);

int		fpf_route_uin(int fd, unsigned int a);		// route u
int		fpf_count_uin(unsigned int a);
char	*fpf_uitoa(unsigned int a);

int		fpf_route_hex(int fd, unsigned int aa, char *a);	// route xX
int		fpf_count_hex(unsigned int a);
void	fpf_print_hex(int fd, unsigned int aa, char *a);

int		fpf_route_ptr(int fd, uintptr_t a);			// route p
int		fpf_count_ptr(uintptr_t a);
void	fpf_print_ptr(int fd, uintptr_t a);

int		fpf_len(const char *a);

#endif
