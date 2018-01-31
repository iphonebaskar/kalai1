#include<stdio.h>
void main()
{
        int i=1, sum=0, a;
        printf ("Enter the number of terms whose sum you would like to evaluate \n");
        scanf ("%d", &a);
        do
        {
            sum = sum+i;
            i=i+1;
        } while (i<=a);
        printf("The sum of first %d natural numbers is %d", a, sum);
        getch();
}
