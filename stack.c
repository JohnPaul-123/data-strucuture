#include <stdio.h>
#define SIZE 5

int main()
{
    int stack[SIZE];
    int top = -1;
    int n, choice, i;

    do
    {
        printf("\n1. PUSH");
        printf("\n2. POP");
        printf("\n3. DISPLAY THE STACK");
        printf("\n4. EXIT");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                if (top == SIZE - 1)
                {
                    printf("STACK IS OVERFLOW");
                }
                else
                {
                    printf("Enter the Stack Element: ");
                    scanf("%d", &n);
                    top++;
                    stack[top] = n;
                    printf("Element Pushed");
                }
                break;

            case 2:
                if (top == -1)
                {
                    printf("STACK IS UNDERFLOW");
                }
                else
                {
                    printf("POPPED ELEMENT IS: %d", stack[top]);
                    top--;
                }
                break;

            case 3:
                if (top == -1)
                {
                    printf("STACK IS EMPTY");
                }
                else
                {
                    printf("STACK ELEMENTS ARE: ");
                    for (i = top; i >= 0; i--)
                    {
                        printf("%d ", stack[i]);
                    }
                }
                break;

            case 4:
                printf("EXIT");
                break;

            default:
                printf("INVALID CHOICE");
        }
    } while (choice != 4);

    return 0;
}

