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

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*r;

	i = 0;
	r = (unsigned char *)dst;
	p = (unsigned char *)src;
	if (r > p)
	{
		while (len > 0)
		{
			r[len - 1] = p[len - 1];
			len--;
		}
	}
	else
	{
		while (i < len)
		{
			r[i] = p[i];
			i++;
		}
	}
	return (dst);
}

char	*join(char *line, char *buf)
{
	char	*r;

	r = (char *)malloc(ft_strlen(line) + ft_strlen(buf) + 1);
	ft_memmove(r, line, ft_strlen(line));
	ft_memmove(r + ft_strlen(line), buf, ft_strlen(buf));
	r[ft_strlen(line) + ft_strlen(buf)] = 0;
	return (r);
}