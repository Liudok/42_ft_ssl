#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lberezyn <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/02 16:24:50 by lberezyn          #+#    #+#              #
#    Updated: 2018/04/02 16:24:53 by lberezyn         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME        = ft_ssl

CC          = clang

CFLAGS      = -Wall -Wextra -Werror

SRCS        = main.c parser.c utils.c

OBJS        = $(SRCS:.c=.o)

all         : $(NAME)

$(NAME)     : $(OBJS) 
	make -C libft
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME) -L./libft -lft
	@printf "\e[38;5;46m./$(NAME) SUCCESSFULLY BUILD 🖥\e[0m\n"

$(OBJS)     : %.o : %.c  
	@$(CC) $(CFLAGS) -c $< -o $@ 

clean       :
	@rm -f $(OBJS)
	make -C libft clean
	@printf "\e[38;5;226m$(OBJS) DELETED\e[0m\n"

fclean      : clean
	@rm -f $(NAME)
	make -C libft fclean
	@printf "\e[38;5;226m./$(NAME) DELETED\e[0m\n"

re          : fclean all

.PHONY: clean fclean re
