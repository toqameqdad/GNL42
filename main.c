#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

int main(void)
{
    int fd;
    char *line;

    fd = open("test.txt", O_RDONLY);
    if (fd < 0)
        return (1);

    line = get_next_line(fd);
printf("1: %s", line);
free(line);

line = get_next_line(fd);
printf("2: %s", line);
free(line);

line = get_next_line(fd);
printf("3: %s", line);
free(line);

    close(fd);
}
