#include "linked.h"

// function to print out the values in the struct
void print_cat(struct cat *c) {
    printf("%s is %d years old and is a %s.\n",
        c->name,c->age,c->breed);
}

// function to make a new struct
struct cat * add_cat(char n[100], int a, char b[100]) {
    struct cat * c = malloc(sizeof(struct cat));
    strncpy(c->name, n, 100);
    strncpy(c->breed, b, 100);
    c -> age = a;
    c->next = NULL;
    return c;
}

void print_list(struct cat *c) {
    if (c != NULL) {
        print_cat(c);
        if (c->next != NULL) {
            print_list(c->next);
        }
    } else {
        printf("This linked list was cleared!");
    }
}

struct cat * insert_front(struct cat *c, char n[100], int a, char b[100]) {
    struct cat *front = add_cat(n, a, b);
    front->next = c;
    return front;
}

struct cat * free_list(struct cat *c) {
    if (c->next != NULL) {
        c->next = free_list(c->next);
    }
    free(c);
    c = NULL;
    // printf("%p",c);
    return c;

    // struct cat * temp;
    // while (c != NULL) {
    //     temp = c;
    //     c = c->next;
    //     free(temp);
    //     temp = NULL;
    // }
    // return c;
}


int main() {
    // struct cat * Joline;
    // strcpy(Joline->name, "Joline");
    // Joline->age = 5;
    // strcpy(Joline->breed, "Calico");
    // print_cat(Joline);

    printf("This is Mark:\n");
    struct cat * Mark = add_cat("Mark", 3, "Siamese");
    print_cat(Mark);
    // print_list(Mark);

    struct cat * Nyan = insert_front(Mark, "Nyan Cat", 10, "Pop Tart");
    // print_list(Nyan);

    struct cat * GB = insert_front(Nyan, "Gwangbok", 3, "Norwegian Forest Cat");
    // print_list(Nyan);

    struct cat * Tan = insert_front(GB, "Tan", 1, "Ginger");
    printf("\nThis is Mark and his friends!\n");
    print_list(Tan);

    // free(Mark);
    printf("\nYou're not included....\n");
    free_list(Tan);
    print_list(Tan);

    return 0;
}