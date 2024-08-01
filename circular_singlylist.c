#include<stdio.h> 
#define null 0
#include<stdlib.h> 
struct node{ 
 int info; 
 struct node*nxt; 
}; 
int main() 
{ 
 int val,n,i,ch,x,afternode; 
 int count=0; 
 struct node *p,*q,*tmp,*r; 
 menu: 
 printf(" Hello Shravani D10-33 \n Enter 1 for creating a new linked list \n Enter 2 for inserting 
a number at last \n 3 for deleting the first node \n 4 to count the number of npdes with even 
values\n 5 to display the list ");
 scanf("%d",&ch); 
 switch(ch) 
 { 
 case 1: 
 printf("Enter the number of nodes to be inserted:"); 
 scanf("%d",&n); 
 tmp=(struct node *)malloc(sizeof(struct node *)); 
 printf("Enter a number:"); 
 scanf("%d",&val); 
 tmp->info=val; 
17
 tmp->nxt=p; 
 p=tmp; 
 q=tmp; 
 for(i=0;i<n-1;i++) 
 { 
 tmp=(struct node *)malloc(sizeof(struct node*)); 
 printf("Enter a number:"); 
 scanf("%d",&val); 
 tmp->info=val; 
 tmp->nxt=p; 
 q->nxt=tmp; 
 q=tmp; 
 } 
 r=p; 
 while(r->nxt!=p) 
 { 
 printf("%d\t",r->info); 
 r=r->nxt; 
 } 
printf("%d",r->info); 
printf("\n"); 
break; 
 case 2: 
 
 tmp=(struct node *)malloc(sizeof(struct node*)); 
 printf("Enter a number to be inserted:"); 
 scanf("%d",&val); 
 tmp->info=val; 
 tmp->nxt=p; 
 q->nxt=tmp; 
 q=tmp; 
 r=p; 
 while(r->nxt!=p) 
 { 
 printf("%d\t",r->info); 
 r=r->nxt; 
 } 
 printf("%d",r->info); 
 printf("\n"); 
18
 break; 
 
 case 3: 
 
 printf("Enter the value to be deleted:"); 
 scanf("%d",&val); 
 if(p->info=val) 
 { 
 r=p; 
 p=p->nxt; 
 free(r); 
 
 } 
 r=p; 
 while(r->nxt!=q->nxt) 
 { 
 printf("%d\t",r->info); 
 r=r->nxt; 
 } 
 printf("%d",r->info); 
 printf("\n"); 
 break; 
 
 case 4: 
 
 tmp=(struct node *)malloc (sizeof(struct node)); 
 if(p->info=null) 
 { 
 printf("list is empty"); 
 } 
 
 while(tmp!=p) 
 { 
 if((tmp->info%2)==0) 
 { 
 count++; 
 tmp=tmp->nxt; 
 } 
 } 
 
19
 printf("The number of nodes with even values are :%d",count); 
 break; 
 } 
 goto menu;}
