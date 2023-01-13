#include <stdio.h>
#include <stdlib.h>
#define size 5
int s[size];
int top = -1;
int isfull()
{
    if (top >= size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isempty()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int push(int a)
{
    top++;
    s[top] = a;
}
int pop()
{
    int a;
    a = s[top];
    top--;
    return a;
}
void display()
{
    int i;
    if (isempty())
    {

        printf("\n Stack is empty!! underflow");
    }
    else
    {
        for (i = top; i >= 0; i--)
        {
            printf("\n %d", s[i]);
        }
    }
}
void main()
{
    int a, choice, i, ans;
    printf("\n Implementation of stack:");
    do
    {
        printf("\n 1: Push\n 2: pop \n 3: display \n 4: peek \n 5: exit");
        printf("\n\n Enter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\n Enter a value to insert into a stack:");
            scanf("%d", &a);
            if (isfull())
                printf("stack is full");
            else
                push(a);
            break;
        case 2:
            if (isempty())
                printf("\n stack is empty");
            else
            {
                a = pop();
                printf("\n The popped element is %d ", a);
            }
            break;
        case 3:
            display();
            break;
        case 4:
            if (isempty())
                printf("\n stack is empty");
            else
            {
                printf("\n The top element is %d ", s[top]);
            }
            break;
        case 5:
            exit(0);
        }
        printf("\n Do you want to continue:(1=yes)");
        scanf("%d", &ans);
    } while (ans == 1);
}