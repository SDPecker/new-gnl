#define BUFFER_SIZE 32
#include <unistd.h>
#include <stdlib.h>

char	*ft_strchr(const char *s, char c);
int		get_next_line(int fd, char **line);
size_t	ft_strlen(const char *s);
char	*join(char *line, char *buf);
