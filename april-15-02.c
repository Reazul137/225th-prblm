#include<stdio.h>
int main()
{
    float x, sum, t, d;
    int i, n;

    printf("Input the value of x : ");
    scanf("%d",&x);

    printf("Input the number of terms : ");
    scanf("%d",&n);

    sum=1; t=1;

    for (i=1; i<n; i++)
    {
        d = (2*i)*(2*i-1);
        t = -t*x*x/d;
        sum = sum + t;
    }
    printf("\n The sum = %f \n Number of terns = %d\n value of x = %f\n", sum,n,x);

    return 0;
}
