#include <stdio.h>

int main()
{
    int n;
    int to;

    printf("Enter n: ");
    scanf("%d", &n);
    printf("=== Convert %d to What? ===\n", n);
    printf("1. Hexadecimal\n2. Octal\n");
    printf("> ");
    scanf("%d", &to);

    switch(to)
    {
        case 1:
            printf("%d: 0x%x\n", n, n);

            break;
        
        case 2:
            printf("%d: 0%o\n", n, n);

            break;
        
        default:
            printf("Invalid Number\n");
            
            return 1;
    }

    return 0;
}