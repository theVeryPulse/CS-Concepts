CC = cc
CFLAGS = -Wall -Wextra -Werror
HEADERS = libft.h


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

.PHONY: clean

clean:
	rm *.out
