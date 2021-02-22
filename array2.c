#include <stdio.h>

int main()
{
    int a[3][3] =
    {
        {35, 6, 1},
        {4, 5, 16},
        {9, 7, 92}
    };

    int i, j;
    for (i = 0; i <3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d, ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}