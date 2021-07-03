#include<stdio.h>
void merge_sort[int[],int,int);
void merge_sort(int[],int,int,int);
main()
{
int a[50],n,i;
printf("\nEnter size of an arrray:");
scanf("%d",&n);
printf("\nEnter element of an array:");
for(i=0;i<n;i++)
scanf("%d",&a[1]);
merge_sort(a,0,n-1);
printf ("\n\nAfter sorting :\n");
for (i=0;i<n;i++)
printf ("\n%d",a[i]);
getch();
}

void merge_sort(int a[],inr beg,int end)
{
int mid;
if(beg<end)
{
mid=(beg+end)/2;
merge_sort(a,beg,mid);
merge_sort



}




}
}
