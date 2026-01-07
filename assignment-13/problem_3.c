/*Create a sample linked list about 5 entries using the following strcuture. insert a new entry before or after a given id and delete a entry of a given id*/
#include <stdio.h>
#include <stdlib.h>

struct student {
    int id, Maths, Science;
    struct student *next;
};

struct student *head = NULL;

void delete(int id) {
    struct student *t = head, *p = NULL;
    while (t && t->id != id) {
        p = t;
        t = t->next;
    }
    if (!t) return;
    if (!p) head = t->next;
    else p->next = t->next;
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
        if (ch == 2) {
            scanf("%d", &id);
            delete(id);
        }
        else if (ch == 3)
            display();
        else
            break;
    }
    return 0;
}
