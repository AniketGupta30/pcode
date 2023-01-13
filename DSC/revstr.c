#include <stdio.h>
#include <string.h>
#define size 20
char stack[size];
int top = -1;
void push(char ch)
{
    if (top == size - 1)
        printf("\n Stack is overflow");
    else
        stack[++top] = ch;
}
char pop()
{
    if (top == -1)
        printf("\n Stack is Underflow");
    else
        return stack[top--];
}
void main()
{
    char str[20];
    int i;
    printf("\n Enter the string : ");
    scanf("%s", str);
    for (i = 0; i < strlen(str); i++)
        push(str[i]);
    for (i = 0; i < strlen(str); i++)
        str[i] = pop();
    printf("\n Reverse String : %s \n", str);
}