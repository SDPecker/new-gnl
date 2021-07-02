#define BUFFER_SIZE 32
#include <unistd.h>
#include <stdlib.h>

char	*ft_strchr(const char *s, char c);
void	*ft_strdup(const char *s);
int		get_next_line(int fd, char **line);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
