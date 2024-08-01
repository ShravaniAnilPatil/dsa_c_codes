#include <stdio.h>
int main() {
int i,ch,top=-1,max,val,a[max-1];
 printf("Hello Shravani D10A-33\n");
 printf("Enter the size of the array:");
scanf("%d",&max);
menu:
printf("Enter 1 for push \n 2 for pop \n 3 for Exit:");
scanf("%d",&ch);
switch(ch)
{
case 1: if(top==max-1)
{
printf("Shravani stack is full\n");
}
else
{
printf(" Shravani Enter the value of element to be entered:");
scanf("%d",&val);
top++;
a[top]=val;
}
for(i=top;i>=0;i--)
{
printf("%d\n",a[i]);
}
break;
case 2: if(top==-1)
{
printf(" Shravani stack is empty\n");
}
else
{
5
printf("%d element is deleted\n",a[top]);
top--;
}
for(i=top;i>=0;i--)
{
printf("%d\n",a[i]);
}
break;
case 3: printf("Thank you Shravani your work is completed\n");
break;
default : printf(" Shravani you've entered an Incorrect value \n ");
break;
}goto menu}
