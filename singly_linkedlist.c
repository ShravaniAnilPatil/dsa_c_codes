#include <stdio.h> 
#define null 0 
#include<stdlib.h> 
struct node{ 
 int info; 
 struct node*nxt; 
}; 
int main() 
{ 
int val,n,i,ch,x,afternode; 
struct node *p,*q,*tmp,*r; menu: 
 printf(" Hello Shravani D10A 33 \n Enter 1 for creating a new linked list \n 2 for inserting a 
number at the beginning \n 3 for inserting a number at last \n 4 for inserting in between \n 5 for 
deleting an element from beginning \n 6 for deleting an element from last \n 7 for deleting an 
elemnt from between:"); 
scanf("%d",&ch); 
switch(ch) 
{ 
case 1: 
printf("Enter the number of nodes to be inserted:"); 
scanf("%d",&n); tmp=(struct node *)malloc(sizeof(struct node *)); 
printf("Enter a number:"); 
scanf("%d",&val); 
tmp->info=val; 
tmp->nxt=null; 
p=tmp; 
q=tmp; 
for(i=0;i<n-1;i++) 
 { 
tmp=(struct node *)malloc(sizeof(struct node*)); 
printf("Enter a number:"); 
scanf("%d",&val); 
tmp->info=val; 
12
tmp
->nxt=null; 
q
->nxt=tmp; 
q=tmp; 
 } 
 r=p; 
 while(r
->nxt!=null) 
 { 
 printf("%d\t",r
->info); 
 r=r
->nxt; 
 } 
printf("%d",r
->info); 
printf("
\n"); 
break; 
case 2: 
tmp=(struct node *)malloc(sizeof(struct node*)); 
printf("Enter a number to be inserted:"); 
scanf("%d",&val); 
tmp
->info=val; 
tmp
->nxt=p; 
p=tmp; 
r=p; 
while(r
->nxt!=null) 
 { 
 printf("%d\t",r
->info); 
 r=r
->nxt; 
 } 
printf("%d",r
->info); 
printf("
\n"); 
break; 
case 3: 
tmp=(struct node *)malloc(sizeof(struct node*)); 
printf("Enter a number to be inserted:"); 
scanf("%d",&val); 
tmp
->info=val; 
tmp
->nxt=null; 
q
->nxt=tmp; 
q=tmp; 
r=p; 
while(r
->nxt!=null) 
 { 
 printf("%d\t",r
->info); 
 r=r
->nxt; 
 } 
 printf("%d",
r
->info); 
 printf("
\n"); 
 break; 
13
case 4: 
tmp=(struct node *)malloc(sizeof(struct node*)); 
printf("Enter a value to be inserted:"); 
scanf("%d",&val); 
printf("Enter the afternode"); 
scanf("%d",&afternode); 
tmp
->info=val; 
 r=p; 
 while(r
->info!=afternode) 
{ r=r
->nxt; 
} 
tmp
->nxt=r
->nxt; 
r
->nxt=tmp; 
 r=p; 
 while(r
->nxt!=null) 
 { 
 printf("%d\t",r
->info); 
 r=r
->nxt;
} 
 printf("%d",r
->info); 
 printf("
\n"); 
 break; 
case 5: 
tmp=(struct node *)malloc(sizeof(struct node*)); 
printf("Enter the value to be deleted:"); 
scanf("%d",&val); 
if(p
->info==val) 
 { r=p; 
 p=p
->nxt; 
 free(r); 
 
 } 
 r=p; 
 while(r
->nxt!=null) 
 { 
 printf("%d\t",r
->info); 
 r=r
->nxt; 
 } 
 printf("%d",r
->info); 
 printf("
\n"); 
 break; 
case 6: 
tmp=(struct node *)malloc(sizeof(struct node*)); 
printf("Enter the number to be deleted:"); 
scanf("%d",&val); 
if(q
->info==val){ 
14
 r=p; 
 while(r
->nxt
->nxt!=null) 
 { 
 r=r
->nxt; 
 } 
 free(q); 
 q=r; 
 
q
->nxt=null; 
 } 
 r=p; 
 while(r
->nxt!=null) 
 { 
 printf("%d\t",r
->info); 
 r=r
->nxt; 
 } 
 printf("%d",r
->info); 
 printf("
\n"); 
 break; 
case 7: 
tmp=(struct node *)malloc(sizeof(struct node*)); 
printf("Enter the value to be deleted:"); 
scanf("%d",&val); 
if(p
->info!=val&&q
->info!=val) 
 { 
 r=p; 
 while(r
->nxt
->info!=val) 
 { 
 r=r
->nxt; 
 } 
 
 
r
->nxt=r
->nxt
->nxt; 
 } r=p; 
 while(r
->nxt!=null) 
 { 
 printf("%d\t",r
->info); 
 r=r
->nxt; 
 } 
 printf("%d",r
->info); 
 printf("
\n"); 
 break; 
 default: 
 printf("BYE BYE"); 
 break; 
 } 
 goto menu; }
15
