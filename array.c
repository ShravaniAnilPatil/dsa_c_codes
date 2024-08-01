#include <stdio.h> 
void main() 
{ 
 int ch,i,n,arr[20],m; 
 printf("Shravani Patil\nrollno.33\nD10A"); 
 do 
 { 
 printf("\n\nEnter Your Choice\n"); 
 printf("\n1: Create New Array\n2:Insert new element\n3:Delete element from an 
 Array\n4:Display \n5:exit \n "); 
 scanf("\n%d",&ch); 
 switch(ch) 
 { 
 case 1: 
 printf("Enter no of element you want to insert\n"); 
 scanf("%d",&n); 
 for(i=0;i<n;i++) 
 { 
 printf("Element no %d:\t",i+1); 
 scanf("\t%d",&arr[i]); 
 } 
 break; 
 case 2: 
 printf("Enter element you want to insert\n"); 
 scanf("%d",&m); 
 arr[n]=m; 
 n++; 
 break; 
 case 3: 
 printf("Enter element you want to delete\n"); 
2
 scanf("%d",&m); 
 for(i=0;i<n;i++) 
 { 
 if(arr[i]==m) 
 { 
 arr[i]=arr[i+1]; 
 arr[i+1]=m; 
 } 
 } 
 
n--; 
 break; 
 case 4: 
 for(i=0;i<n;i++) 
 { 
 printf("%d\t",i); 
 } 
 printf("
\n"); 
 for(i=0;i<n;i++) 
 { 
 printf("%d\t",arr[i]); 
 } 
 break; 
 } 
 }while(ch!=5); 
} 
