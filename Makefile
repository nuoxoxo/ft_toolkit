#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By:  nuo  <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: ____/__/__ __:__:__ by nuoxoxo           #+#    #+#              #
#    Updated: 2022/10/24 16:34:02 by nuxu             ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		:=	ft_toolkit.a
HEADER		:=	ft_toolkit.h
COMP		:=	cc -Wall -Werror -Wextra
RMV		:=	/bin/rm -f
INC		:=	-I./

SRC_PRT		:=	print.c \
			route_cs.c \
			route_id.c \
			route_p.c \
			route_u.c \
			route_x.c

SRC_FPF		:=	fpf.c \
			route_cs.c \
			route_id.c \
			route_p.c \
			route_u.c \
			route_x.c

SRC_GNL		:=	get_next_line.c \
			get_next_line_utils.c

# ADDED: ft_isspace

SRC_LIBC	:=	ft_atoll.c \
			ft_atoi.c \
			ft_stof.c \
			ft_pow.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_is_lt_gt_or.c \
			ft_isspace_non_linebreak.c \
			ft_isspace.c \
			ft_isquote.c \
			ft_itoa.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_split.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_strndup.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_strjoin_delim.c \
			ft_strjoin_protected.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strmapi.c \
			ft_strncmp.c \
			ft_strcmp.c \
			ft_strnstr.c \
			ft_strstr.c \
			ft_strrchr.c \
			ft_strtrim.c \
			ft_substr.c \
			ft_lstadd_back.c \
			ft_lstadd_front.c \
			ft_lstclear.c \
			ft_lstdelone.c \
			ft_lstiter.c \
			ft_lstlast.c \
			ft_lstmap.c \
			ft_lstnew.c \
			ft_lstsize.c \
			ft_exit_error_alloc.c \
			ft_cleaner.c

SRC_DEQ		:=	deque_remove.c \
			deque_create_node.c \
			deque_clear.c \
			deque_back.c \
			deque_size.c \
			deque_insert.c \
			deque_push_back.c \

SRC_LGP		:=	$(addprefix get_next_line/, $(SRC_GNL)) \
			$(addprefix libft/, $(SRC_LIBC)) \
			$(addprefix print/, $(SRC_PRT)) \
			$(addprefix fpf/, $(SRC_FPF)) \
			$(addprefix deque/, $(SRC_DEQ))

SRC		:=	$(addprefix ft_toolkit/, $(SRC_LGP))

BUD		:=	$(SRC:%.c=%.o)


all		:	$(NAME)

%.o		:	%.c
			@ echo "compiling [$<]"
			@ $(COMP) $(INC) -o $@ -c $<


$(NAME)		:	$(BUD)
			@ echo "archiving ..."
			@ ar rc $@ $^
			@ echo "generating index to archive [$@]"
			@ ranlib $@


clean		:
			@$(RMV) $(BUD)

fclean		:	clean
			@ $(RMV) $(NAME)

f		:	fclean
re		:	f all

.PHONY		:	all clean fclean re
