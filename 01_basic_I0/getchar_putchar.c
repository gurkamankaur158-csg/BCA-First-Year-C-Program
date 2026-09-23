#include <stdio.h>
int main()
{
    int num, i, pro;
    printf("enter a number:");
    scanf("%d", &num);
    for (i = 1; i <= 10; i++)
    {
        pro = num * i;
        printf("%d * %d = %d\n", num, i, pro);
        printf("\n");
        printf("END");
        return 0;
    }
}
