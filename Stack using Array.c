#include<stdio.h>
#define MAX 50
void push();
void pop();
void display();
int stack[MAX],
top=-1,item;
main()
{
int ch;
do
{
printf("\n\n\n\n1.\tPush\n2.\tPop\n3.\tDisplay\n4.\tExit\n");
printf("\nEnter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
push();
break;
case 2:
pop();
break;
case 3:
display();
break;
case 4:
exit();
default:
    printf("\n\nInvalid entry.Please try again...\n");


}
}
while(ch!=4);

}
void push()
{

    if (top == MAX-1)
     printf ("\n\nStack i s full .");
    else
        {
        printf ("\n\n Enter ITEM:");
        scanf("%d",&item);
    top++;
    stack[top]=item;
    printf ("\n\nITEM inserted=%d",item);

}



}
void pop ()
{
    if (top==-1)
        printf ("\n\nStack is empty.");
    else
    {

        item =stack[top];
        top--;
        printf ("\n\nITEM deleted=%d",item);

    }
}
void display ()
{

    int i;
    if (top == -1)
        printf ("\n\nStack is empty.");
    else
        {
       for (i=top;1>=0;i--)
       printf ("\n%d",stack[i]);

    }
}
getch();
