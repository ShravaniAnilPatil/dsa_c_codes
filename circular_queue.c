#include <stdio.h>
int main() {
int ch,a[4],f=-1,r=-1,max=4,val,i;
menu:
printf("\ Shravani D10A-33\n1:insert\n2:delete\n3:exit");
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
if((r==max-1)&&(f!=0))
r=-1;
if(f==-1)
{
f++;
}
r++;
a[r]=val;
}
for(i=max-1;i>=0;i--)
{
printf("\n%d",a[i]);
}
break;
case 2:
if(f==-1)
{
10
printf("Queue is empty"); }
else {
printf("
\n%d is deleted 
\n",a[f]);
a[f]=0;
f++;
if(f==r+1) {
printf("Queue is empty");
f=r=
-1;
}
if(f>max
-1&&r>=0)
{
f=0; }}
for(i=max
-1;i>=0;i--
)
{
printf("
\t%d",a[i]);
}
break; }
goto menu;
return 0;
}
