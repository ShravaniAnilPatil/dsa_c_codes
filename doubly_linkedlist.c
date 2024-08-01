#include <stdio.h>
#include <stdlib.h>
struct node {
 int info;
 struct node* lnxt;
 struct node* rnxt;
};
int main() {
 int val, n, i, ch, afternode;
 struct node *p = NULL, *q = NULL, *tmp, *r;
menu:
 printf("Hello Shravani D10A 33\n");
 printf("Enter 1 for creating a new linked list\n");
 printf("Enter 2 for inserting a number at last\n");
 printf("Enter 3 for deleting the first node\n");
 printf("Enter 4 to count the number of nodes with even values\n");
 printf("Enter 5 to display the list\n");
 printf("Enter 6 to insert after a specific node\n");
 printf("Enter 7 to delete the last node\n");
 printf("Enter 8 to delete a specific node\n");
 printf("Enter 9 to exit\n");
 scanf("%d", &ch);
 switch (ch) {
 case 1:
 printf("Enter the number of nodes to be inserted:");
 scanf("%d", &n);
 p = q = NULL;
21
 for (i = 0; i < n; i++) {
 tmp = (struct node*)malloc(sizeof(struct node));
 printf("Enter a number:");
 scanf("%d", &val);
 tmp
->info = val;
 tmp
->rnxt = NULL;
 tmp
->lnxt = NULL;
 if (p == NULL) {
 p = q = tmp;
 } else {
 
q
->rnxt = tmp;
 tmp
->lnxt = q;
 q = tmp;
 
}
 
}
 break;
 case 2:
 tmp = (struct node*)malloc(sizeof(struct node));
 printf("Enter a number to be inserted:");
 scanf("%d", &val);
 tmp
->info = val;
 tmp
->rnxt = NULL;
 tmp
->lnxt = q;
 
q
->rnxt = tmp;
 q = tmp;
 break;
 case 3:
 if (p != NULL) {
 tmp = p;
 p = p
->rnxt;
 free(tmp);
 
}
 break;
 case 4:
 // Count the number of nodes with even values
 tmp = p;
 int count_even = 0;
 while (tmp != NULL) {
 if (tmp
->info % 2 == 0) {
 count_even++;
 
}
 
tmp = tmp
->rnxt;
22
 }
 printf("Number of nodes with even values: %d\n", count_even);
 break;
 case 5:
 r = p;
 while (r != NULL) {
 printf("%d\t", r->info);
 r = r->rnxt;
 }
 printf("\n");
 break;
 case 6:
 tmp = (struct node*)malloc(sizeof(struct node));
 printf("Enter a value to be inserted:");
 scanf("%d", &val);
 printf("Enter the afternode:");
 scanf("%d", &afternode);
 tmp->info = val;
 r = p;
 while (r != NULL) {
 if (r->info == afternode) {
 tmp->rnxt = r->rnxt;
 r->rnxt = tmp;
 tmp->lnxt = r;
 if (tmp->rnxt != NULL) {
 tmp->rnxt->lnxt = tmp;
 }
 break;
 }
 r = r->rnxt;
 }
 break;
 case 7:
 if (p != NULL) {
 if (p->rnxt == NULL) {
 free(p);
 p = NULL;
 q = NULL;
 } else {
 tmp = p;
 while (tmp->rnxt->rnxt != NULL) {
23
 tmp = tmp
->rnxt;
 
}
 free(tmp
->rnxt);
 tmp
->rnxt = NULL;
 q = tmp;
 
}
 
}
 break;
 case 8:
 printf("Enter a value to be deleted:");
 scanf("%d", &val);
 if (p != NULL) {
 if (p
->info == val) {
 tmp = p;
 p = p
->rnxt;
 free(tmp);
 if (p != NULL) {
 
p
->lnxt = NULL;
 
}
 } else {
 tmp = p;
 while (tmp != NULL && tmp
->info != val) {
 tmp = tmp
->rnxt;
 
}
 if (tmp != NULL) {
 tmp
->lnxt
->rnxt = tmp
->rnxt;
 if (tmp
->rnxt != NULL) {
 tmp
->rnxt
->lnxt = tmp
->lnxt;
 
}
 free(tmp);
 
}
 
}
 
}
 break;
 case 9:
 printf("Exiting program.
\n");
 exit(0);
 default:
 printf("Invalid choice
\n");
 break;
 
}
 goto menu
