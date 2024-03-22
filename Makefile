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
	src/strlen.c \
	src/memset.c \
        src/memcpy.c \
        src/arrset.c \
        src/memmove.c \
	src/intarr.c \
	src/vector_create.c \
	src/vector_delete.c \
	src/vector_destructor.c \
	src/vector_erase_at.c \
	src/vector_get.c \
	src/vector_insert_at.c \
	src/vector_pop_back.c \
	src/vector_pop_front.c \
	src/vector_push_back.c \
	src/vector_push_front.c \
	src/print_base.c \
        src/printf.c \
        src/print_char.c \
        src/print_int.c \
        src/print_str.c \
        src/print_perc.c \
        src/print_x.c \
        src/print_b.c \
        src/print_o.c \
        src/print_p.c \
        src/flag_create.c \
	src/capitalise.c \
	src/perm.c \
	src/mode_str.c \
	src/strdupcat.c \
	src/get_digit.c \
	src/nb_len.c

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
	test/test_strlen.c \
	test/memset.c \
        test/memcpy.c \
        test/arrset.c \
	test/test_printf.c \
	test/memmove.c

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
