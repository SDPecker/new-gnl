#include "get_next_line.h"

int		get_next_line(int fd, char **line)
{
	static char	*buf;
	static int	result;
	size_t		reader;

	//free(&line);
	result = 2;
	buf = (char *)malloc(BUFFER_SIZE + 1);
	reader = read(fd, buf, BUFFER_SIZE);
	if (result > 1)
	{
		while (!ft_strchr(buf, '\n') && reader < BUFFER_SIZE)
		{
			ft_strlcat(&line, buf, BUFFER_SIZE);
			reader = read(fd, buf, BUFFER_SIZE);
		}
		
	}
}