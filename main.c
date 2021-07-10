//#include "get_next_line.c"
//#include "get_next_line_utils.c"
#include "get_next_line.h"
#include <fcntl.h>

int main(void)
{
    int fd = open("test2.txt", O_RDONLY);
    get_next_line(fd);
    get_next_line(fd);
    close(fd);
}