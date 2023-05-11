#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            long long int temp = 0;
            if (array[i] < array[j])
            {

                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    long long int ans = 0;
    for (int i = 0; i < k; i++)
    {

        if (0 <= array[i])
        {
            ans = ans + array[i];
        }
    }
    printf("%lld", ans);

    return 0;
}