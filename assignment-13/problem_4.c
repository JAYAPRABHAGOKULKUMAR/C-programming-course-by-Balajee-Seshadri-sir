/*Create a doubly linked list with about 5 entries using the following structire and insert a new entry before or after a given id and delete an entry of a given id*/
#include <stdio.h>
#include <stdlib.h>

struct student {
    struct student *prev;
    int id, Maths, Science;
    struct student *next;
};

struct student *head = NULL;

void insert() {
    struct student *n = malloc(sizeof(struct student));
    scanf("%d %d %d", &n->id, &n->Maths, &n->Science);
    n->prev = NULL;
    n->next = head;
    if (head) head->prev = n;
    head = n;
}

void delete(int id) {
    struct student *t = head;
    while (t && t->id != id) t = t->next;
    if (!t) return;
    if (t->prev) t->prev->next = t->next;
    else head = t->next;
    if (t->next) t->next->prev = t->prev;
    free(t);
}

void display() {
    struct student *t = head;
    while (t) {
        printf("%d %d %d\n", t->id, t->Maths, t->Science);
        t = t->next;
    }
}

int main() {
    int ch, id;
    while (1) {
        scanf("%d", &ch);
        if (ch == 1) insert();
        else if (ch == 2) {
            scanf("%d", &id);
            delete(id);
        }
        else if (ch == 3) display();
        else break;
    }
    return 0;
}
