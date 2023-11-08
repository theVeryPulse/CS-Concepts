CC = gcc
CFLAGS = -Wall -Wextra -Werror
CFILES = $(wildcard *.c)
OFILES = $(CFILES:.c=.o)
NAME = libft.a

# build object files and archive the static library
all: $(NAME)

# build the library with the required .o files
$(NAME): $(OFILES)
	ar rcs $@ $^

# remove all .o files
clean:
	rm -f $(OFILES)

# remove static library as well as all .o files
fclean: clean
	rm -f $(NAME)

# remove all files, then rebuild the library
re: fclean all

# compile everything 
bonus: $(NAME) clean

# print information on all .c files
print: $(wildcard *.c)
	ls -la $(wildcard *.c)

.PHONY: all clean fclean re
