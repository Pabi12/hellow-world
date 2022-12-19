#include <stdio.h>
#include <stdlib.h>
#define max 5
void insert();
void delete ();
void display();
int queue[max];
int front = -1;
int rear = -1;
int main()
{
    int choice;
    while (1)
    {
        printf("\n1->enqueue");
        printf("\n2->dequeue");
        printf("\n3->display");
        printf("\n4->exit\n");
        printf("\nenter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete ();
            break;
        case 3:
            printf("printing the elements......\n");
            display();
            break;
        case 4:
            exit(0);

        default:
            printf("enter choice between 1-4....");
            break;
        }
    }
    return 0;
}
void insert()
{
    int x;
    if ((front == 0 && rear == max - 1) || (front == rear + 1))
    {
        printf("\n overflown");
    }
    else
    {
        printf("\n enter an element to insert:");
        scanf("%d", &x);
        if (rear == -1)
        {
            front = 0;
            rear = 0;
        }
        else if (rear = max - 1)
        {
            rear = 0;
        }
        else
        {
            rear++;
        }
    }
    queue[rear] = x;
}
void delete ()
{
    int x;
    if (front == -1)
    {
        printf("underflow");
        return;
    }
    else
    {
        printf("the deleted  element is %d");
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else if (front == max - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
    }
}

void display()
{
    if (rear == -1)
    {
        printf("underflow");
        return;
    }

    if (front > rear)
    {
        for (int i = front; i < max; i++)
        {
            printf("%d\t", queue[i]);
        }
        for (int i = 0; i <= rear; i++)
        {
            printf("%d\t", queue[i]);
        }
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            printf("%d\t", queue[i]);
        }
    }
}

