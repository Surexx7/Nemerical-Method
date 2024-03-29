#include <stdio.h>
#include <math.h>
#include <conio.h>
#define MAX 15

int main()
{
    int n, i, j;
    float x[MAX], f[MAX], fp, lf, sum, xp;
    printf("\n Input the number of data pairs: ");
    scanf("%d", &n);
    printf("\nInput data pairs x(i) and values f(i) (one set in each line):\n");
    for (i = 0; i < n; i++)
        scanf("%f%f", &x[i], &f[i]);

    printf("\n Input x at which interpolation is required: ");
    scanf("%f", &xp);
    sum = 0.0;
    for (i = 0; i < n; i++)
    {

        lf = 1.0;
        for (j = 0; j < n; j++)
        {
            if (i != j)
                lf = lf * (xp - x[j]) / (x[i] - x[j]);
        }
        sum = sum + lf * f[i];
    }
    fp = sum;
    printf("\n Interpolated function value at x = %f is %f.", xp, fp);

    getch();
    return 0;
}