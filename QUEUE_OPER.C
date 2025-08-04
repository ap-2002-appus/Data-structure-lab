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

        
