#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != '\n')
		i++;
	return (i);
}

char	*ft_strchr(const char *s, char c)
{
	char	*r;

	r = (char *)s;
	if (!c)
		return (&r[ft_strlen(r)]);
	while (*r)
	{
		if (*r == c)
			return (r);
		r++;
	}
	return (NULL);
}
