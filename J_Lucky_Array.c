#include <stdio.h>
#include <limits.h>
int main()
{
    int input;
    scanf("%d", &input);

    int array[input];
    for (int i = 0; i < input; i++)
    {
        scanf("%d", &array[i]);
    }
    int min = INT_MAX, count = 0;
    for (int i = 0; i < input; i++)
    {
        if (min >= array[i])
        {
            min = array[i];
        }
    }
    for (int i = 0; i < input; i++)
    {
        if (array[i] == min)
        {
            count++;
        }
    }

    if (count % 2 != 0)
    {
        printf("Lucky");
    }
    else
    {
        printf("Unlucky");
    }

    return 0;
}