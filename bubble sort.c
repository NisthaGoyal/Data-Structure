#include<stdio.h>
void bubble_sort();
int a[50],n;
main()
{
int i;
printf("\nEnter size of an array: ");
scanf("%d",&n);
printf ("\nEnter elements of an array : \n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
bubble_sort();
printf ("\n\nAfter sorting:\n");
for (i=0;i<n;i++)
printf("\n%d",a[i]);
getch();
}
void bubble_sort()
{

    int j,k,temp;
    for (j=0;j<n;j++)
        for (k=0;k<(n-1)-j;k++)
        if (a[k]>a[k+1])
    {

        temp =a[k];
        a[k] =a[k+1];
        a[k+1]=temp;

    }
}
