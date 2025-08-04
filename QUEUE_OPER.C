#include <stdio.h>
#define SIZE 100

int main() {
    int queue[SIZE];
    int front = -1, rear = -1;
    int choice, item, i;

    while (1) {
        printf("\nQueue Operations Menu:\n");
        printf("1. Enqueue \n");
        printf("2. Dequeue \n");
        printf("3. Display Queue\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
           if (rear == SIZE - 1) {
                printf("Queue is full (Overflow).\n");
            } else {
                printf("Enter the element to insert: ");
                scanf("%d", &item);
                if (front == -1) {
                    front = 0;
                }
                rear++;
                queue[rear] = item;
                printf("%d inserted into queue.\n", item);
            }

        } else if (choice == 2) {
            if (front == -1 || front > rear) {
                printf("Queue is empty (Underflow).\n");
            } else {
                printf("Element deleted: %d\n", queue[front]);
                front++;
                if (front > rear) {
                    // Reset after last element is dequeued
                    front = rear = -1;
                }
            }

        } else if (choice == 3) {
           
            if (front == -1 || front > rear) {
                printf("Queue is empty.\n");
            } else {
                printf("Queue elements: ");
                for (i = front; i <= rear; i++) {
                    printf("%d ", queue[i]);
                }
                printf("\n");
            }

        } else if (choice == 4) {
            printf("Exiting program.\n");
            break;
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
