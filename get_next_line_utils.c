#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s != '\0' && (char)c != *s)
		s++;
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

char	*ft_merge(char *stash, char *buf)
{
	char	*store;
	int		i;
	int		j;

	if (!stash || !buf)
		return (NULL);
	store = (char *)malloc(ft_strlen(stash) + ft_strlen(buf) + 1);
	if (!store)
		return (NULL);
	i = 0;
	while (stash[i] != '\0')
	{
		store[i] = stash[i];
		i++;
	}
	j = 0;
	while (buf[j] != '\0')
		store[i++] = buf[j++];
	store[ft_strlen(stash) + ft_strlen(buf)] = '\0';
	free(stash);
	return (store);
}
