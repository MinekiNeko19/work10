#include "linked.h"

// function to print out the values in the struct
void print_cat(struct cat *c) {
    printf("This is the information on the cat, %s. %s is %d years old and is a %s.\n",
        c->name,c->name,c->age,c->breed);
}

// function to make a new struct
struct cat * add_cat(char n[20], int a, char b[20]) {
    struct cat * c = malloc(sizeof(struct cat));
    strncpy(c->name, n, 100);
    strncpy(c->breed, b, 100);
    c -> age = a;
    return c;
}

void print_list(struct cat *c) {
    print_cat(c);
    if (c->next != NULL) {
        print_list(c->next);
    }
}

// struct cat * insert_front(struct cat *, int) {

// }

// struct cat * free_list(struct cat *) {

// }

int main() {
    // struct cat * Joline;
    // strcpy(Joline->name, "Joline");
    // Joline->age = 5;
    // strcpy(Joline->breed, "Calico");
    // print_cat(Joline);

    struct cat * Mark = add_cat("Mark", 3, "Siamese");
    print_cat(Mark);
    print_list(Mark);
    free(Mark);

    return 0;
}