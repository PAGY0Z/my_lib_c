##
## EPITECH PROJECT, 2023
## B-CPE-110-RUN-1-1-antman-pierre-alexandre.grosset
## File description:
## Makefile
##

AR 	= 	ar rc

CC	=	gcc

CFLAGS	=	 -W -Wall -Wextra -Werror -I./includes

NAME =	libmy.a

SRC	=	src/absolute.c \
		src/add_char_to_str.c \
		src/add_word_to_str.c \
		src/count_strncmp.c \
		src/create_int_table.c \
		src/fill_int_table.c \
		src/get_file_content.c \
		src/get_file_size.c \
		src/is_char_num.c \
		src/is_readable_file.c \
		src/is_str_file.c \
		src/is_token.c \
		src/is_valid_size_file.c \
		src/max_value.c \
		src/min_value.c \
		src/my_count_word.c \
		src/my_getnbr.c \
		src/my_itoa.c \
		src/my_len_nbr.c \
		src/my_perror.c \
		src/my_putchar.c \
		src/my_putline.c \
		src/my_putnbr.c \
		src/my_putstr.c \
		src/my_str_to_word_array.c \
		src/my_strlen.c \
		src/my_strncpy.c \
		src/my_word_len.c \
		src/str_is_alpha.c

SRC_MY_PRINTF	=	src_my_printf/my_printf_identifiers.c \
					src_my_printf/my_printf_my_bigs.c \
					src_my_printf/my_printf_my_getnbr.c \
					src_my_printf/my_printf_my_hexaptr.c \
					src_my_printf/my_printf_my_littlen.c \
					src_my_printf/my_printf_my_putchar.c \
					src_my_printf/my_printf_my_putfloat.c \
					src_my_printf/my_printf_my_putnbr.c \
					src_my_printf/my_printf_my_putstr.c \
					src_my_printf/my_printf_my_scnotation.c \
					src_my_printf/my_printf.c

TOTAL_SRC	=	$(SRC) \
				$(SRC_MY_PRINTF)

OBJ	=	$(TOTAL_SRC:.c=.o)

all:	$(OBJ) copy
	$(AR) $(NAME) $(OBJ)

copy:
	cp -r ./includes ../../

clean:
	rm -f $(NAME) $(OBJ)
	rm -rf ../../includes

fclean: clean

re: fclean all
