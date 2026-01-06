#include <stdio.h>
#include <stdlib.h>

struct student {
    int id;
    int Maths;
    int Science;
    struct student *next;
};

int main() {
    struct student *head = NULL, *temp = NULL, *current = NULL;
    int id, maths, science;

    while (1) {
        printf("Enter Student ID (-1 to stop): ");
        scanf("%d", &id);

        if (id == -1)
            break;

        printf("Enter Maths mark: ");
        scanf("%d", &maths);

        printf("Enter Science mark: ");
        scanf("%d", &science);

        temp = (struct student*)malloc(sizeof(struct student));

        temp->id = id;
        temp->Maths = maths;
        temp->Science = science;
        temp->next = NULL;

        if (head == NULL) {
            head = temp;
            current = temp;
        } else {
            current->next = temp;
            current = temp;
        }
    }

    printf("\nStudent Details:\n");
    current = head;
    while (current != NULL) {
        printf("ID: %d | Maths: %d | Science: %d\n",
               current->id, current->Maths, current->Science);
        current = current->next;
    }

    return 0;
}
