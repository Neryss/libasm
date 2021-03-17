# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ckurt <ckurt@student.42lyon.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/16 13:59:39 by ckurt             #+#    #+#              #
#    Updated: 2021/03/17 15:53:31 by ckurt            ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

_END=\033[0m
_BOLD=\033[1m
_UNDER=\033[4m
_REV=\033[7m

_RED=\033[31m
_GREEN=\033[32m
_YELLOW=\033[33m
_BLUE=\033[34m
_PURPLE=\033[35m
_CYAN=\033[36m
_WHITE=\033[37m

_IGREY=\033[40m
_IRED=\033[41m
_IGREEN=\033[42m
_IYELLOW=\033[43m
_IBLUE=\033[44m
_IPURPLE=\033[45m
_ICYAN=\033[46m
_IWHITE=\033[47m

NAME = libasm.a
ASM = nasm -fmacho64
LIBC = ar rcs
SRCS =	srcs/ft_read.s \
		srcs/ft_strcmp.s \
		srcs/ft_strcpy.s \
		srcs/ft_strdup.s \
		srcs/ft_strlen.s \
		srcs/ft_write.s 
OBJS = $(SRCS:.s=.o)

%.o: %.s ./libasm.h
	@printf "$(_PURPLE)[$(NAME)] $(_END)$(_CYAN)[+] $(_END)Compiling $(_BLUE)owo$(_END) | $(_CYAN)$<$(_END)\n" | tr "lr" "w"
	@$(ASM) $< -o $(<:.s=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(LIBC) $(NAME) $(OBJS)
	@printf "$(_PURPLE)[$(NAME)] $(_END)$(_BLUE)[✓] $(_END)$(_UNDER)$(_BOLD)$(_GREEN)Done uwu$(_END)\n" | tr "lr" "w"

re: fclean
	@printf "$(_PURPLE)[$(NAME)] $(_END)$(_RED)[-]$(_END) All cleaned up!\n" | tr "lr" "w"
	@$(MAKE) all

clean:
	@printf "$(_PURPLE)[$(NAME)] $(_END)$(_RED)[-]$(_END) Objects deleted!\n"
	@rm -f $(OBJS)

test: $(NAME)
	@gcc test.c -L . -lasm
	@printf "$(_PURPLE)[$(NAME)] $(_END)$(_BLUE)[✓] $(_END)$(_UNDER)$(_BOLD)$(_GREEN)Compiled with test owo$(_END)\n" | tr "lr" "w"

fclean: clean
	@rm -f $(NAME)