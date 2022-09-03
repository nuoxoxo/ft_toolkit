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

#ifndef FT_TOOLKIT_H
# define FT_TOOLKIT_H

# include "stdlib.h"
# include "unistd.h" // size_t dependency

# define slen ft_strlen
# define exit_error_alloc ft_exit_error_alloc

/*
 *
 *	libc
 *
 */

char	*get_next_line(int f);
int		print(const char *s, ...);

char	*ft_itoa(int n);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s);

char	*ft_strndup(const char *__, int _); // new

void	ft_putendl_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *des, const char *src, size_t size);

char	*ft_strnstr(const char *source, const char *lookup, size_t n);
char    *ft_strstr(const char *source, const char *lookup);
char	*ft_strrchr(const char *s, int c);
char	*ft_strchr(const char *s, int c);

int		ft_strcmp(const char *i1, const char *i2); // NEW
int		ft_strncmp(const char *s1, const char *s2, size_t n);

char	*ft_substr(char const *s, unsigned int start, size_t n);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *charset);
char	*ft_strmapi(char const *s, char (*f) (unsigned int, char));
void	ft_striteri(char *s, void (*f) (unsigned int, char*));
char	**ft_split(char const *s, char c);

int		ft_atoi(const char *s);
long long	ft_atoll(const char *str); // new
int		ft_isascii(int c);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);

//	new

void	ft_exit_error_alloc(void);
void	ft_void_cleaner(void *_);

/*
 *
 * 	linked list
 *
 */

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}		t_list;

int		ft_lstsize(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f) (void *), void (*del) (void *));
t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstdelone(t_list *lst, void (*del) (void*));
void	ft_lstclear(t_list **lst, void (*del) (void*));
void	ft_lstiter(t_list *lst, void (*f) (void *));
void	ft_lstadd_front(t_list **lst, t_list *p);
void	ft_lstadd_back(t_list **lst, t_list *p);

/*
 *
 * 	mem
 *
 */

/*
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memset(void *destination, int c, size_t n);
void	*ft_memcpy(void *des, const void *src, size_t n);
void	*ft_memmove(void *des, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
*/

//int		ft_tolower(int c);
//int		ft_toupper(int c);

#endif
