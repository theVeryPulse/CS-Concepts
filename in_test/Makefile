CC = cc
CFLAGS = -Wall -Wextra -Werror
HEADERS = libft.h

SRC_ITOA = ft_itoa.c ft_strlen.c ft_strlcpy.c
TARGET_ITOA = ft_itoa

SRC_STRMAPI = ft_strmapi.c ft_strlen.c
TARGET_STRMAPI = ft_strmapi


$(TARGET_STRMAPI): $(SRC_STRMAPI) $(HEADERS)
	$(CC) $(CFLAGS) $(SRC_STRMAPI) -o $(TARGET_STRMAPI).out

$(TARGET_ITOA): $(SRC_ITOA) $(HEADERS)
	$(CC) $(CFLAGS) $(SRC_ITOA) -o $(TARGET_ITOA).out

.PHONY: clean

clean:
	rm *.out
