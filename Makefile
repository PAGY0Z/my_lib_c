##
## EPITECH PROJECT, 2023
## B-PSU-100-RUN-1-1-navy-julien.ferdinand
## File description:
## Makefile
##

CC	=	gcc

NAME = BINARY_NAME

CFLAGS	=	-W -Wall -Wextra -Werror

FLAGS	=	--coverage -lcriterion

INCLUDE	=	-I./includes/

LIB_INCLUDE	=	-L./lib/my \
				-lmy

LIBRARY_FOLDER	=	./lib/my/

SRC_FILES_LIB	=	lib/my/src/absolute.c \
					lib/my/src/add_char_to_str.c \
					lib/my/src/add_word_to_str.c \
					lib/my/src/count_strncmp.c \
					lib/my/src/create_int_table.c \
					lib/my/src/fill_int_table.c \
					lib/my/src/get_file_content.c \
					lib/my/src/get_file_size.c \
					lib/my/src/is_char_num.c \
					lib/my/src/is_readable_file.c \
					lib/my/src/is_str_file.c \
					lib/my/src/is_token.c \
					lib/my/src/is_valid_size_file.c \
					lib/my/src/max_value.c \
					lib/my/src/min_value.c \
					lib/my/src/my_count_word.c \
					lib/my/src/my_getnbr.c \
					lib/my/src/my_itoa.c \
					lib/my/src/my_len_nbr.c \
					lib/my/src/my_perror.c \
					lib/my/src/my_putchar.c \
					lib/my/src/my_putline.c \
					lib/my/src/my_putnbr.c \
					lib/my/src/my_putstr.c \
					lib/my/src/my_str_to_word_array.c \
					lib/my/src/my_strlen.c \
					lib/my/src/my_strncpy.c \
					lib/my/src/my_word_len.c \
					lib/my/src/str_is_alpha.c

SRC_MY_PRINTF	=	lib/my/src_my_printf/my_printf_identifiers.c \
					lib/my/src_my_printf/my_printf_my_bigs.c \
					lib/my/src_my_printf/my_printf_my_getnbr.c \
					lib/my/src_my_printf/my_printf_my_hexaptr.c \
					lib/my/src_my_printf/my_printf_my_littlen.c \
					lib/my/src_my_printf/my_printf_my_putchar.c \
					lib/my/src_my_printf/my_printf_my_putfloat.c \
					lib/my/src_my_printf/my_printf_my_putnbr.c \
					lib/my/src_my_printf/my_printf_my_putstr.c \
					lib/my/src_my_printf/my_printf_my_scnotation.c \
					lib/my/src_my_printf/my_printf.c

TESTS_LIB_FILES	=	tests/src_tests_lib/tests_redirect_func.c \
					tests/src_tests_lib/tests_absolute.c \
					tests/src_tests_lib/tests_add_char_to_str.c \
					tests/src_tests_lib/tests_add_word_to_str.c \
					tests/src_tests_lib/tests_count_strncmp.c \
					tests/src_tests_lib/tests_create_table.c \
					tests/src_tests_lib/tests_fill_int_table.c \
					tests/src_tests_lib/tests_get_file_content.c \
					tests/src_tests_lib/tests_get_file_size.c \
					tests/src_tests_lib/tests_is_char_num.c \
					tests/src_tests_lib/tests_is_readable_file.c \
					tests/src_tests_lib/tests_is_str_file.c \
					tests/src_tests_lib/tests_is_token.c \
					tests/src_tests_lib/tests_is_valid_size_file.c \
					tests/src_tests_lib/tests_max_value.c \
					tests/src_tests_lib/tests_min_value.c \
					tests/src_tests_lib/tests_my_count_word.c \
					tests/src_tests_lib/tests_my_getnbr.c \
					tests/src_tests_lib/tests_my_itoa.c \
					tests/src_tests_lib/tests_my_len_nbr.c \
					tests/src_tests_lib/tests_my_perror.c \
					tests/src_tests_lib/tests_my_printf.c \
					tests/src_tests_lib/tests_my_putchar.c \
					tests/src_tests_lib/tests_my_putline.c \
					tests/src_tests_lib/tests_my_putnbr.c \
					tests/src_tests_lib/tests_my_putstr.c \
					tests/src_tests_lib/tests_my_str_to_word_array.c \
					tests/src_tests_lib/tests_my_strlen.c \
					tests/src_tests_lib/tests_my_strncpy.c \
					tests/src_tests_lib/tests_my_word_len.c \
					tests/src_tests_lib/tests_str_is_alpha.c

SRC_TESTS	=	$(TESTS_LIB_FILES) \
				$(SRC_MY_PRINTF) \
				$(SRC_FILES_LIB)
all:
	make -C $(LIBRARY_FOLDER)
	gcc -o $(NAME) $(SRC_PROGRAMM) $(INCLUDE) $(LIB_INCLUDE) $(CFLAG)

create_tests_files:
	rm -rf tests/tests_files/specials/unreadable_test_file
	rm -rf tests/tests_files/specials/unreadable_filled_test_file
	touch tests/tests_files/specials/unreadable_test_file
	chmod 000 tests/tests_files/specials/unreadable_test_file
	echo "Unreadable" > tests/tests_files/specials/unreadable_filled_test_file
	chmod 000 tests/tests_files/specials/unreadable_filled_test_file

tests_run: create_tests_files
	$(CC) -o unit_test $(SRC_TESTS) -I./lib/my/includes $(FLAGS)
	./unit_test
	gcovr -e tests
	gcovr -e tests -b

tests_clean:
	rm -rf tests/tests_files/specials/unreadable_test_file
	rm -rf tests/tests_files/specials/unreadable_filled_test_file
	rm -f unit_test *.gcda *.gcno

tests_re : tests_clean tests_run

clean:
	rm -f $(NAME)

fclean: clean tests_clean
	make -C $(LIBRARY_FOLDER) fclean

re: fclean all
