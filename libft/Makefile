# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amery <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 18:38:29 by amery             #+#    #+#              #
#    Updated: 2022/11/17 13:10:33 by amery            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

SRCS_DIR = ./srcs/
SRCS_DIR_B = ./srcs_bonus/
OBJS_DIR = ./objs/

FILES = ft_memset ft_bzero ft_memcpy ft_memmove ft_memchr ft_memcmp \
		ft_strlen ft_strlcpy ft_strlcat ft_strchr ft_strrchr ft_strnstr \
		ft_strncmp ft_atoi ft_isalpha ft_isdigit ft_isalnum ft_isascii \
		ft_isprint ft_toupper ft_tolower ft_calloc ft_strdup ft_substr \
		ft_strjoin ft_strtrim ft_split ft_itoa ft_strmapi ft_putchar_fd \
		ft_putstr_fd ft_putendl_fd ft_putnbr_fd ft_striteri

FILES_B = ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast ft_lstadd_back \
			ft_lstdelone ft_lstclear ft_lstiter ft_lstmap

SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))
SRCS_B = $(addprefix $(SRCS_DIR_B), $(addsuffix .c, $(FILES_B)))

OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))
OBJS_B = $(addprefix $(OBJS_DIR), $(addsuffix _bonus.o, $(FILES_B)))

# Cible principale
$(NAME): $(OBJS)
	$(AR) $@ $^

# Crée le dossier des objets si nécessaire
$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

# Compilation des fichiers normaux
$(OBJS_DIR)%.o: $(SRCS_DIR)%.c | $(OBJS_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Compilation des fichiers bonus
$(OBJS_DIR)%_bonus.o: $(SRCS_DIR_B)%.c | $(OBJS_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Cible bonus
bonus: $(OBJS) $(OBJS_B)
	$(AR) $(NAME) $^

all: $(NAME)

clean:
	$(RM) $(OBJS) $(OBJS_B)
	$(RM) -r $(OBJS_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
