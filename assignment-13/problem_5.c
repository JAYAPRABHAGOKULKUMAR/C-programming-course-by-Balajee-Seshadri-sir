/*Wreite a program create a stack using linked list, use push and pop. Push will insert the entry in top of the list and the pop will get top of the list and display. the display will show from the top to bottom*/
#include <stdio.h>
#include <stdlib.h>

struct student {
    int id, Maths, Science;
    struct student *next;
};

struct student *top = NULL;

void push() {
    struct student *n = malloc(sizeof(struct student));
    scanf("%d %d %d", &n->id, &n->Maths, &n->Science);
    n->next = top;
    top = n;
}

void pop() {
    if (!top) return;
    struct student *t = top;
    top = top->next;
    printf("%d %d %d\n", t->id, t->Maths, t->Science);
    free(t);
}

void display() {
    struct student *t = top;
    while (t) {
        printf("%d %d %d\n", t->id, t->Maths, t->Science);
        t = t->next;
    }
}

int main() {
    int ch;
    while (1) {
        scanf("%d", &ch);
        if (ch == 1) push();
        else if (ch == 2) pop();
        else if (ch == 3) display();
        else break;
    }
    return 0;
}
