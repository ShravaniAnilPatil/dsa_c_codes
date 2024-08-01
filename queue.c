#include <stdio.h>
int main() {
int ch,max=4,a[4],f=-1,r=-1,val,i;
menu:
printf("Hello Shravani Anil Patil D10A -33");
printf("\n Enter 1 for insert\n 2 for delete\n 3 for exit:");
scanf("%d",&ch);
switch(ch)
{
case 1:
if((f==0&&r==max-1)||(f==r+1))
{
printf("queue is full");
}
else
{
printf("enter the value to insert");
scanf("%d",&val);
if(f==-1)
{
f++;
}
r++;
a[r]=val;
}
for(i=max-1;i>=0;i--)
{
printf("%d\n",a[i]);
}
break;
case 2:
if(f==-1)
{
printf("Queue is empty");
7
}
else {
printf("
\n %d is deleted 
\n",a[f]);
a[f]=0;
f++;
if(f==r+1) {
printf("Queue is empty");
}}
for(i=max
-1;i>=0;i--
)
{
printf("
\n%d",a[i]);
}
break;
case 3: 
printf("Shravani work is completed");
break;
default :
printf("Incorrect value entered");
break; }
goto menu; }
return 0; 
}
