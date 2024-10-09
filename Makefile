# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eldiaz-c <eldiaz-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/08 00:48:17 by eldiaz-c          #+#    #+#              #
#    Updated: 2024/10/09 17:21:05 by eldiaz-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nombre del archivo de la biblioteca
NAME = libft.a

# Compilador y banderas de compilacion
CC = cc
CFLAGS = -Wall -Werror -Wextra

# Archivos fuente y archivos objeto
SOURCES = ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \

OBJECTS = $(SOURCES:.c=.o)

# Archivo de encabezado
INCLUDE = libft.h

# Crear bibliotecas y eliminar archivos
# AR = ar rcs crea, modifica y extrae archivos desde biblioteca, r remplaza, c crea, s indice
# RM = rm -f eliminar forzado

# Regla porr defecto que lo compila todo
all: $(NAME)

# Regla para crear la biblioteca
$(NAME): $(OBJECTS) $(INCLUDE)
	@ar rcs $(NAME) $(OBJECTS)

# Regla para crear los archivos .o
$(OBJECTS):
	$(CC) -c $(CFLAGS) $(SOURCES)

# Eliminar todos los archivos .o y .a
clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f $(NAME)

re: fclean $(NAME)

# Indica que las siguientes reglas no son archivos reales
.PHONY: all clean fclean re