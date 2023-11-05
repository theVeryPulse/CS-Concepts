CC = gcc
CFLAGS = -Wall -Wextra -Werror
CFILES = $(wildcard *.c)
OFILES = $(SRC:.c=.o)
NAME = libft.a

# build the static library
all: $(NAME) clean

# if all .o files in place, build the library
$(NAME): $(OFILES)
	ar rcs $@ $^

# compile each .c into corresponding .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# remove all .o files
clean:
	rm $(OFILES)

# remove static library as well as all .o files
fclean: clean
	rm $(NAME)

# remove all files, then rebuild the library
re: fclean all

# print information on all .c files
print: $(wildcard *.c)
	ls -la $(wildcard *.c)

# Compiling for testing

SRC_PUTNBR = ft_putnbr_fd.c ft_putchar_fd.c
TARGET_PUTNBR = ft_putnbr_fd.out
$(TARGET_PUTNBR): $(SRC_PUTNBR) $(HEADERS)
	$(CC) $(CFLAGS) $^ -o $@


SRC_STRMAPI = ft_strmapi.c ft_strlen.c
TARGET_STRMAPI = ft_strmapi.out
$(TARGET_STRMAPI): $(SRC_STRMAPI) $(HEADERS)
	$(CC) $(CFLAGS) $^ -o $@


SRC_ITOA = ft_itoa.c ft_strlen.c ft_strlcpy.c
TARGET_ITOA = ft_itoa.out
$(TARGET_ITOA): $(SRC_ITOA) $(HEADERS)
	$(CC) $(CFLAGS) $^ -o $@

.PHONY: all clean fclean re

clean_out:
	rm *.out
