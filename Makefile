NAME = libftprintf.a

LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

SRCS = ./srcs/ft_char_format.c \
	#ft_strlcpy.c\
	
	
OBJS = $(SRCS:.c=.o)

# BONUS = ft_lstnew_bonus.c \
# 		ft_lstadd_front_bonus.c \
# 		ft_lstsize_bonus.c \
# 		ft_lstlast_bonus.c \
# 		ft_lstadd_back_bonus.c \
# 		ft_lstdelone_bonus.c \
# 		ft_lstclear_bonus.c \
# 		ft_lstiter_bonus.c \
# 		ft_lstmap_bonus.c \

#BONUS_OBJS = $(BONUS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIBC = ar rc
REMOVE = rm -f

%.o: %c
	$(CC) $(CFLAGS) -c $<

all: $(NAME) $(LIBFT)

$(LIBFT):
	make -C $(LIBFT_PATH)

$(NAME): $(OBJS)
	cp $(LIBFT) $(NAME)
	$(LIBC) $(NAME) $(OBJS)

# bonus: $(BONUS_OBJS)
# 	$(LIBC) $(NAME) $(BONUS_OBJS)

clean:
	make clean -C $(LIBFT_PATH)
	$(REMOVE) $(OBJS) $(BONUS_OBJS)

fclean: clean
	make fclean -C $(LIBFT_PATH)
	$(REMOVE) $(NAME)

re: fclean all

.PHONY: all clean fclean re libft bonus