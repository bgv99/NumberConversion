#include <stdio.h>

void binaryConversion(int n)
{
    int binary_array[1024];
    int byte_separate = 0;
    int i;

    printf("%d: ", n);

    for(i = 0; n > 0; i++)
    {
        binary_array[i] = n % 2;
        n /= 2;
    }

    for(i = i - 1; i >= 0; i--)
    {
        if(byte_separate == 8)
        {
            printf(" ");

            byte_separate = 0;
        }

        printf("%d", binary_array[i]);
        
        byte_separate++;
    }

    printf("\n");
}

int main()
{
    int n;
    int to;

    printf("Enter n: ");
    scanf("%d", &n);
    printf("=== Convert %d to What? ===\n", n);
    printf("1. Hexadecimal\n2. Octal\n3. Binary\n");
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

        case 3:
            binaryConversion(n);

            break;
        
        default:
            printf("Invalid Number\n");
            
            return 1;
    }

    return 0;
}
