CC = gcc

CFLAGS = -Wall -Wextra -Werror -Iinclude -g

SRCS =  src/atoi.c \
	src/has_opt.c \
	src/has_opt_value.c \
	src/print_base10.c \
	src/puts.c \
	src/strcat.c \
	src/strchr.c \
	src/strcmp.c \
	src/strcpy.c \
	src/strdup.c \
	src/strlen.c

TEST = 	test/test_atoi.c \
	test/test_has_opt.c \
	test/test_has_opt_value.c \
	test/test_print_base10.c \
	test/test_puts.c \
	test/test_strcat.c \
	test/test_strchr.c \
	test/test_strcmp.c \
	test/test_strcpy.c \
	test/test_strdup.c \
	test/test_strlen.c

OBJS = $(SRCS:.c=.o)

TOBJ = $(TEST:.c=.o)

all: libstu.a

libstu.a: $(OBJS)
	ar rc libstu.a $(OBJS)

clean:
	@rm -vf $(OBJS) $(TOBJ)

fclean: clean
	@rm -vf libstu.a
	@rm -vf ut.out

re: fclean all

.PHONY: re fclean clean all

ut.out: $(TOBJ) $(OBJS)
	$(CC) -lcriterion -o ut.out $(TOBJ) $(OBJS)
