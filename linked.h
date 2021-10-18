#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cat {
    char name[100];
    int age;
    char breed[100];
    struct cat *next;
};

void print_cat(struct cat *c);
struct cat * add_cat(char n[20], int a, char b[20]);
void print_list(struct cat *c);
struct cat * insert_front(struct cat *c, char n[100], int a, char b[100]);
struct cat * free_list(struct cat *c);
struct cat * remove_node(struct cat * front, int data);