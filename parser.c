
#include "md5.h"

int parser(int ac, char **av)
{
	if (ac == 1)
		ft_putendl("usage: ft_ssl command [command opts] [command args]");
	else
	{
		if (!ft_strcmp(av[2], "-p"))
			printf("%s\n", av[ac - 1]);
		else if (!ft_strcmp(av[2], "-q"))
			printf("%s\n", av[ac - 1]);
		else
			ft_putstr("\nno flags\n");
	}
	return (0);
}
