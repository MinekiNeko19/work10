#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cat {
    char name[100];
    int age;
    char breed[100];
    struct cat *next;
    *next = NULL;
    };

void print_cat(struct cat *c);
struct cat * add_cat(char n[20], int a, char b[20]);
void print_list(struct cat *);
struct cat * insert_front(struct cat *, int);
struct cat * free_list(struct cat *);

