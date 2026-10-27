#include <stdio.h>
int main()
{
    float a;
    float b;
    char ch;
    printf("enter the values:");
    scanf("%f %c %f", &a, &ch, &b);
    switch(ch)
    {
        case '+':
        {
            printf("add=%f", a+b);
            break;
        }

        case '-':
        {
            printf("sub=%f", a-b);
            break;
        }

        case '*':
        {
            printf("mul=%f", a*b);
            break;
        }

        case '/':
        {
            if(b != 0)
                printf("div=%f", a/b);
            else
                printf("division not possible");
            break;
        }
    }

    return 0;
}
