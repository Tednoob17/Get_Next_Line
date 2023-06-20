
#include "../include/get_next_line.h"
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int		fd;
	char	*line;

	fd = open(argv[1], O_RDONLY);
	while (1)
	{
		line = get_next_line(fd);
		printf("%s", line);
		if (line == NULL)
			break ;
		free(line);
	}
    if (argc == 0){
        return (0);
    }
	return (0);
}
