#include <stdio.h>

#define Max 5

int Queue[Max];
int front = -1;
int rear = -1;

void enqueue()
{
    int x;

    if (rear == Max - 1)
    {
        printf("Queue is overflow\n");
    }
    else
    {
        printf("Enter the element\n");
        scanf("%d", &x);

        rear++;

        if (front == -1)
        {
            front = 0;
        }

        Queue[rear] = x;

        printf("Element is inserted = %d\n", x);
    }
}

void dequeue()
{
    int x;

    if (front == -1)
    {
        printf("Queue is underflow\n");
    }
    else
    {
        x = Queue[front];

        printf("Deleted Element = %d\n", x);

        front++;

        if (front > rear)
        {
            front = -1;
            rear = -1;
        }
    }
}

void display()
{
    int i;

    if (front == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue elements are:\n");

        for (i = front; i <= rear; i++)
        {
            printf("%d ", Queue[i]);
        }

        printf("\n");
    }
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                enqueue();
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Program exited.\n");
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}