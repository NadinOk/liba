#pragma once

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>


bool mx_isspace(char c);
void mx_printstr(const char *s);
int mx_strlen(const char *s);
int mx_strncmp(const char *s1, const char *s2, int n);
int mx_strcmp(const char *s1, const char *s2);
int mx_binary_search(char **arr, int size, const char *s, int *count);
int mx_bubble_sort(char **arr, int size);
int mx_strncmp(const char *s1, const char *s2, int n);
char *mx_strstr(const char *s1, const char *s2);
char *mx_strchr(const char *s, int c);
int mx_count_substr(const char *str, const char *sub);
int mx_count_words(const char *str, char delimiter);
char *mx_strjoin(char const *s1, char const *s2);
char *mx_strnew(const int size);
char *mx_file_to_str(const char *filename);
void mx_foreach(int *arr, int size, void (*f)(int));
unsigned long mx_hex_to_nbr(const char *hex);
char *mx_nbr_to_hex(unsigned long nbr);
double mx_pow(double n, unsigned int pow);
void mx_printchar(char c);
void mx_printint(int n);
int mx_sqrt(int x);
void mx_swap_char(char *s1, char *s2);
void mx_str_reverse(char *s);
char *mx_strcat(char *s1, const char *s2);
char *mx_strcpy(char *dst, const char *src);
void mx_strdel(char **str);
char *mx_strdup(const char *str);
char *mx_strncpy(char*dst, const char *src, int len);



typedef struct  s_list {
    void *data;
    struct s_list *next;
 
}               t_list;

t_list *mx_create_node(void *data);
void mx_push_front(t_list **list, void *data);
void mx_push_back(t_list **list, void *data);
void mx_pop_front(t_list **head);
void mx_pop_back(t_list **head);
int mx_list_size(t_list *list);
t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *, void *));
