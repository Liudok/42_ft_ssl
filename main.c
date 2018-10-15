
#include "include/md5.h"


void ft_bzero_flags(struct s_flags *flags);

int ft_md5(int ac, char **av)
{
	printf("MD5: %s\n", av[ac - 1]);


	
	
	return (0);
}

int main(int ac, char **av)
{
	struct s_flags flags;

	ft_bzero_flags(&flags);
	init_error_messages();
	if (ac == 1)
		ft_putendl("usage: ft_ssl command [command opts] [command args]");
	else
	{
		print_error(parse_flags(ac, av, &flags));
	}
	return (0);
}

void print_error(enum errors e)
{
	int er = e + 5;
	
	if (er < 5)
	{
		ft_putstr(g_errors[er]);
		// if (parse_flags(ac, av, &flags) < 0)
		// {
		// 	ft_putchar('\'');
		// 	ft_putstr(av[ac - 1]);
		// 	ft_putstr("\' is an invalid command.\n\nNo such file or directory\n");
		// }
		// else
		// {
		// 	ft_putstr("ft_ssl: Error: \'");
		// 	ft_putstr(av[ac - 1]);
		// 	ft_putstr("\'' is an invalid command.\n\nStandard commands:\n\n");
		// 	ft_putstr("Message Digest commands:\nmd5\nsha256\n\nCipher commands:\n");

		// }
	}
	
}