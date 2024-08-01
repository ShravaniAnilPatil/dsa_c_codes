int main()
{
 int i, max;
 int node = 0;
 int val;
 int n, ind;
 int ch;
 struct node
 {
 int info;
 struct node *rnxt;
 struct node *lnxt;
 };
 struct node *temp;
 struct node *p;
 struct node *q;
 struct node *r;
 temp = (struct node *)malloc(sizeof(struct node));
 q = (struct node *)malloc(sizeof(struct node));
 p = (struct node *)malloc(sizeof(struct node));
 r = (struct node *)malloc(sizeof(struct node));
 printf("Shravani D10A-33 \nEnter the size of the stack \n");
 scanf("%d", &max);
menu:
26
 printf("\n1.Push \n2.Pop \n3.Exit:");
 printf("\nEnter your choice: ");
 scanf("%d", &ch);
 switch (ch)
 {
 case 1: // push
 {
 if (node == max)
 {
 printf("Stack is full!\n");
 }
 else if (node == 0)
 {
 printf("Enter the element\n ");
 scanf("%d", &val);
 temp->info = val;
 temp->rnxt = NULL;
 temp->lnxt = NULL;
 p = temp;
 q = temp;
 node++;
 printf("%d\n", p->info);
 }
 else
 {
 printf("Enter the element ");
 scanf("%d", &val);
 temp = (struct node *)malloc(sizeof(struct node));
 temp->info = val;
 q->rnxt = temp;
 temp->lnxt = q;
 temp->rnxt = NULL;
 q=temp;
 
 
 //display in reverse order
 r = q;
 while (r->lnxt!=NULL)
 {
 printf("%d\n", r->info);
27
 r = r
->lnxt;
 
}
 printf("%d", r
->info);
 node++;
 
}
 
}
 break;
 case 2: // pop
 
{
 if (node == 0)
 
{
 printf("Stack is empty!");
 
}
 else if(node>1)
 
{
 temp = q
->lnxt;
 temp
->rnxt = NULL;
 printf("%d is popped\n", q
->info);
 free(q);
 q=temp;
 node--
;
 
 
 r = q;
 while (r
->lnxt != NULL)
 
{
 printf("%d\n", r
->info);
 r = r
->lnxt;
 
}
 printf("%d", p
->info);
 
 
 
}
 else //poping last element
 
{
 printf("%d is popped",p
->info);
 node--
;
 
}
 }break;
 
}
 goto menu;
28
 }
