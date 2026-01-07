/*Create a sample link list with about 5 entries using the following structure, insert a new entry before and after a given id*/
#include <stdio.h>
#include <stdlib.h>

struct student {
    int id;
    int Maths;
    int Science;
    struct student *next;
};

struct student *head = NULL;

void insert(int ref, int pos) {
    struct student *newnode = malloc(sizeof(struct student));
    scanf("%d %d %d", &newnode->id, &newnode->Maths, &newnode->Science);

    struct student *temp = head, *prev = NULL;

    while (temp && temp->id != ref) {
        prev = temp;
        temp = temp->next;
    }

    if (pos == 0) {   // before
        newnode->next = temp;
        if (prev) prev->next = newnode;
        else head = newnode;
    } else {          // after
        newnode->next = temp->next;
        temp->next = newnode;
    }
}

void display() {
    struct student *t = head;
    while (t) {
        printf("%d %d %d\n", t->id, t->Maths, t->Science);
        t = t->next;
    }
}

int main() {
    int ch, ref;

    while (1) {
        scanf("%d", &ch);
        if (ch == 1) {
            scanf("%d", &ref);
            insert(ref, 1);
        }
        else if (ch == 2)
            display();
        else
            break;
    }
    return 0;
}
