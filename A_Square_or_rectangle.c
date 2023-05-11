#include <stdio.h>

void fun(int n, int m)
{
    if (n == m)
    {
        printf("Square");
    }
    else
    {
        printf("Rectangle");
    }
}
int main()
{
    int input;
    scanf("%d", &input);

    for (int i = 0; i < input; i++)
    {
        int n, m;
        scanf("%d %d", &n, &m);

        fun(n, m);
        printf("\n");
    }

    return 0;
}