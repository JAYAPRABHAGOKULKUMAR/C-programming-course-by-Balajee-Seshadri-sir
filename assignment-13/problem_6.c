/*Write a program to create a queue using a linked list and use add and remove and add will insert the entry at the top of the list and remove will get the bottom of the list and display. the display will show from the top to bottom*/
#include <stdio.h>
#include <stdlib.h>

struct student {
    int id, Maths, Science;
    struct student *next;
};

struct student *front = NULL, *rear = NULL;

void add() {
    struct student *n = malloc(sizeof(struct student));
    scanf("%d %d %d", &n->id, &n->Maths, &n->Science);
    n->next = NULL;
    if (!rear)
        front = rear = n;
    else {
        rear->next = n;
        rear = n;
    }
}

void removeQ() {
    if (!front) return;
    struct student *t = front;
    front = front->next;
    if (!front) rear = NULL;
    printf("%d %d %d\n", t->id, t->Maths, t->Science);
    free(t);
}

void display() {
    struct student *t = front;
    while (t) {
        printf("%d %d %d\n", t->id, t->Maths, t->Science);
        t = t->next;
    }
}

int main() {
    int ch;
    while (1) {
        scanf("%d", &ch);
        if (ch == 1) add();
        else if (ch == 2) removeQ();
        else if (ch == 3) display();
        else break;
    }
    return 0;
}
