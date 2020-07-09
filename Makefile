CC = clang

CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

SOURCES=mx_printchar.c, mx_print_unicode.c, mx_printstr.c, mx_print_strar.c, mx_printint.c, mx_pow.c, mx_sqrt.c, mx_nbr_to_hex.c, mx_hex_to_hex.c, mx_itoa.c, mx_foreach.c, mx_binary_search.c, mx_bubble_sort.c, mx_quicksort.c, mx_strlen.c, mx_swap_char.c, mx_str_reverse.c, mx_strdel.c, mx_del_strarr.c, mx_get_char_index.c, mx_strdup.c, mx_strndup.c, mx_strncpy.c, mx_strcpy.c, mx_strcmp.c, mx_strcat.c, mx_strstr.c, mx_get_substr_index.c, mx_count_substr.c,  mx_count_words.c, mx_strnew.c, mx_strtrim.c, mx_del_extra_spaces.c, mx_strsplit.c, mx_strjoin.c, mx_file_to_str.c, mx_read_line.c, mx_replace_substr.c, mx_memset.c, mx_memcpy.c, mx_memccpy.c, mx_memcmp.c, mx_memchr.c, mx_memrchr.c, mx_memmem.c, mx_memmove.c, mx_realloc.c 

OBJECTS=$(addprefix $(OBJ_DIR), $(SOURCES:.c=.o))
OBJ_DIR=./obj/
SRC_DIR=./src/
HED_DIR=./inc/header.h


EXECUTABLE = morse


all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(EXECUTABLE)

$(OBJECTS): $(OBJ_DIR)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	$(CC) $(CFLAGS) -I $(HED_DIR) -c $< -o $@ 

uninstall:
	rm -rf $(OBJ_DIR) $(EXECUTABLE)

clean: 
	rm -rf $(OBJ_DIR)

reinstall: uninstall all




