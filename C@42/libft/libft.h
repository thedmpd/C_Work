/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 12:12:49 by ddelgado          #+#    #+#             */
/*   Updated: 2016/09/23 12:12:53 by ddelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

size_t			ft_max(size_t a, size_t b);
size_t			ft_min(size_t a, size_t b);
void			ft_putchar_fd(int c, int fd);
void			ft_putchar(int c);
void			ft_putstr_fd(char const *s, int fd);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putnbr_fd(int nb, int fd);
void			ft_putstr(char const *s);
void			ft_putnbr(int nb);
size_t			ft_strlen(const char *str);
int				ft_isupper(int c);
int				ft_islower(int c);
int				ft_isdigit(int c);
int				ft_isalpha(int c);
int				ft_isalnum(int c);
int				ft_isprint(int c);
int				ft_isascii(int c);
int				ft_tolower(int c);
int				ft_toupper(int c);
void			*ft_memchr(const void *s, int c, size_t n);
void			*ft_memset(void *b, int c, size_t len);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *restrict dest, const void *restrict src,
	size_t n);
char			*ft_strcpy(char *dest, const char *src);
char			*ft_strcat(char *s1, const char *s2);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_strcmp(const char *source_1, const char *source_2);
char			*ft_strstr(const char *big, const char *little);
char			*ft_strnstr(const char *big, const char *little,
	size_t len);
void			*ft_memcpy_back(void *restrict dest,
	const void *restrict src, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
size_t			ft_strclen(const char *str, char c);
void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
char			*ft_strncpy(char *dest, const char *src, size_t n);
char			*ft_strncat(char *dest, const char *src, size_t n);
void			*ft_memalloc(size_t n);
int				ft_atoi(char *str);
char			*ft_strdup(const char *src);
size_t			ft_strlcat(char *dest, const char *src, size_t n);
void			ft_memdel(void **ap);
char			*ft_strnew(size_t size);
void			ft_strdel(char **as);
void			ft_strclr(char *s);
void			ft_striter(char *s, void (*f)(char *));
char			*ft_strmap(char const *s, char (*f)(char));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
void			ft_putendl(char const *s);
char			*ft_strrev(char *s);
size_t			ft_digitlen(long nb);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_strequ(char const *s1, char const *s2);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
int				ft_whitespace(int c);
char			*ft_strtrim(char const *s);
size_t			ft_count_objects(const char *s, char c);
char			**ft_strsplit(const char *str, char c);
void			ft_lstadd(t_list **alst, t_list *new);
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list			*ft_lstnew(void const *content, size_t content_size);
t_list      	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

#endif
