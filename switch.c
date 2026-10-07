#include<stdio.h>
int main() 
{
    int choice, a, b;
    printf("Enter Value of a and b: ");
    scanf("%d %d", &a, &b);
    
    printf("1.addition\n 2.sub\n 3.multi\n 4.div\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("addition=%d", a+b);
            break;
        case 2:
            printf("sub=%d", a-b);
            break;
        case 3:
            printf("multi=%d", a*b);
            break;
        case 4:
            if(b != 0)
                printf("div=%d", a/b);
            else
                printf("b zero nako bhau, div nahi honar!");
            break;
        default:
            printf("invalid choice");
            break;
    }
    return 0;
}
