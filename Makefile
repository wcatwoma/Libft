CC := gcc
FLAGS := -Wall -Wextra -Werror
NAME := libft.a

INC := libft.h

SRC := ft_strlen.c \
		ft_atoi.c \
		ft_isalpha.c \
		ft_bzero.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strncmp.c \
		ft_memset.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strnstr.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_putchar_fd.c \
		ft_split.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c\
		ft_putnbr_fd.c \
		ft_strjoin.c\
		ft_substr.c \
		ft_strtrim.c\
		ft_strmapi.c \
		ft_itoa.c

BONUS_SRC := ft_lstnew.c ft_lstadd_front.c \
	ft_lstsize.c ft_lstlast.c \
	ft_lstadd_back.c ft_lstdelone.c \
	ft_lstclear.c ft_lstiter.c \
	ft_lstmap.c

OBJ := $(SRC:.c=.o)
%.o: %.c $(INC)
	gcc $(FLAGS) -c $< -o $@

BONUS_OBJ := $(BONUS_SRC:.c=.o)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

bonus: $(BONUS_OBJ) $(OBJ)
	ar rc $(NAME) $(BONUS_OBJ) $(OBJ)

all: $(NAME)

clean:
	/bin/rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY =	all clean fclean re
