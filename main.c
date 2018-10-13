
#include "md5.h"

int main(int ac, char **av)
{
	if (ac == 1)
		ft_putendl("usage: ft_ssl command [command opts] [command args]");
	else
	{
		if (!ft_strcmp(av[1], "md5"))
			printf("MD5: %s\n", av[ac - 1]);
		else if (!ft_strcmp(av[1], "sha256"))
			printf("%s\n", av[ac - 1]);
		else
			ft_putstr("ft_ssl: Error: ");
			ft_putstr(av[ac - 1]);
			ft_putstr(" is an invalid command.\n\nStandard commands:\n\n");
			ft_putstr("Message Digest commands:\nmd5\nsha256\n\nCipher commands:\n");
		parser(ac, av);
	}
	return (0);
}
