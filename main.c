#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "get_next_line.h"

void	run_test(const char *filename)
{
	int		fd;
	char	*line;
	int		i;

	printf("\n=== Testing file: %s ===\n", filename);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		perror("open");
		return;
	}
	i = 1;
	while (1)
	{
		line = get_next_line(fd);
		if (!line)
			break;
		printf("%d: %s", i++, line);
		free(line);
	}
	close(fd);
}

int	main(void)
{
	// Test files
	run_test("test1.txt");
	run_test("test2.txt");
	run_test("test3.txt");
	run_test("test4.txt");
	run_test("test5.txt");

	// Test stdin
	printf("\n=== Testing stdin ===\n");
	printf("Type a few lines, then Ctrl+D to end:\n");
	int fd = 0; // stdin
	char *line;
	int i = 1;
	while ((line = get_next_line(fd)))
	{
		printf("%d: %s", i++, line);
		free(line);
	}

	return 0;
}
