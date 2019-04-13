#include <stdio.h>
#include <math.h>
int main()
{
    int i, j, count = 0;

    for (i = 1; i > 0; i++)
    {
        for (j = 1; j <= 20; j++)
        {
            if (i % j == 0)
            {
                count++;
                if (count == 20)
                {
                    printf("%d\n", i);
                    break;
                }
            }
            else
            {
                count = 0;
                break;
            }
        }
    }
}
