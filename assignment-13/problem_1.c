/*Singly linked list, input until id = -1, then display all*/
#include <stdio.h>
#include <stdlib.h>

struct student {
    int id;
    int Maths;
    int Science;
    struct student *next;
};

int main() {
    struct student *head = NULL, *temp, *newnode;
    int id;

    while (1) {
        scanf("%d", &id);
        if (id == -1)
            break;

        newnode = (struct student*)malloc(sizeof(struct student));
        newnode->id = id;
        scanf("%d %d", &newnode->Maths, &newnode->Science);
        newnode->next = NULL;

        if (head == NULL)
            head = temp = newnode;
        else {
            temp->next = newnode;
            temp = newnode;
        }
    }

    temp = head;
    while (temp) {
        printf("%d %d %d\n", temp->id, temp->Maths, temp->Science);
        temp = temp->next;
    }

    return 0;
}
