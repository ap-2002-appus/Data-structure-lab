#include <stdio.h>
#define MAX_SIZE 100

int main() {
    int deque[MAX_SIZE];
    int front = -1, rear = -1;
    int operation, item, i;

    while (1) {
        printf("\nDeque Operations:\n");
        printf("1. Insert at Rear\n");
        printf("2. Insert at Front\n");
        printf("3. Delete from Front\n");
        printf("4. Delete from Rear\n");
        printf("5. Display Deque\n");
        printf("6. Exit\n");
        printf("Enter your Operation: ");
        scanf("%d", &operation);

        if (operation == 1) { 
            if ((front == 0 && rear == MAX_SIZE - 1) || (rear + 1 == front)) {
                printf("Deque is full.\n");
            } else {
                printf("Enter element to insert at rear: ");
                scanf("%d", &item);
                if (front == -1) { // empty deque
                    front = rear = 0;
                } else if (rear == MAX_SIZE - 1 && front != 0) {
                    rear = 0; // wrap around
                } else {
                    rear++;
                }
                deque[rear] = item;
                printf("%d inserted at rear.\n", item);
            }
        } else if (operation == 2) { 
            if ((front == 0 && rear == MAX_SIZE - 1) || (rear + 1 == front)) {
                printf("Deque is full.\n");
            } else {
                printf("Enter element to insert at front: ");
                scanf("%d", &item);
                if (front == -1) { 
                    front = rear = 0;
                } else if (front == 0) {
                    front = MAX_SIZE - 1; 
                } else {
                    front--;
                }
                deque[front] = item;
                printf("%d inserted at front.\n", item);
            }
        } else if (operation == 3) { 
            if (front == -1) {
                printf("Deque is empty.\n");
            } else {
                printf("Deleted element from front: %d\n", deque[front]);
                if (front == rear) {
                  
                    front = rear = -1;
                } else if (front == MAX_SIZE - 1) {
                    front = 0; 
                } else {
                    front++;
                }
            }
        } else if (operation == 4) { 
            if (front == -1) {
                printf("Deque is empty.\n");
            } else {
                printf("Deleted element from rear: %d\n", deque[rear]);
                if (front == rear) {
                    
                    front = rear = -1;
                } else if (rear == 0) {
                    rear = MAX_SIZE - 1; 
                } else {
                    rear--;
                }
            }
        } else if (operation == 5) {
            if (front == -1) {
                printf("Deque is empty.\n");
            } else {
                printf("Deque elements: ");
                i = front;
                while (1) {
                    printf("%d ", deque[i]);
                    if (i == rear)
                        break;
                    i = (i + 1) % MAX_SIZE;
                }
                printf("\n");
            }
        } else if (operation == 6) { // Exit
            printf("Exiting program.\n");
            break;
        } else {
            printf("Invalid choice.\n");
        }
    }

    return 0;
}

