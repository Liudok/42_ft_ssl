#ifndef MD5_H
#define MD5_H

#include "stdio.h"

#include "../libft/libft.h"


enum errors
{
	ERROR = -5,
	STANDARD_COMMANDS = -4,
	UNKNOWN_OPTION = -3,
	NO_SUCH_FILE = -2,
	INVALID_COMAND = -1,
	OK = 0
};

char * g_errors[6];


struct s_flags
{
	char p;
	char q;
	char r;
	char s;
	char md5;
	char sha256;
};

void ft_bzero_flags(struct s_flags *flags);
void print_error(enum errors e);
void init_error_messages(void);
int parse_flags(int ac, char **av, struct s_flags *flags);


#endif