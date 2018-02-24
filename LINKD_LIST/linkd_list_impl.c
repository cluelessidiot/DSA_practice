    #include<stdio.h>
#include<stdlib.h>
#define ll long long int
#define snode struct node
struct node
{
    ll data;
    struct node* next;
};
snode* createnode()
{
 ll val;
 scanf("%lld",&val);
 snode* temp;
 temp=(snode*)malloc(sizeof(snode));
 if(temp==NULL)
   {
       printf("Memmory wasnt allocated");
       exit (0);
   }
 else
  {
      temp->data=val;
     //  printf("%lld",val);
      temp->next=NULL;
  }
  return temp;
}
void insert_front(snode **head)
{
   snode   *temp;
   temp=createnode();
   temp->next=head;
   *head=temp;
}
void print_list(snode* head)
{
  snode* temp=head;
  while(temp!=NULL)
  {
      printf("%lld  ",temp->data);
      temp=temp->next;

   }
}
void main()
{
  snode* head;
 insert_front(&head);
  insert_front(&head);
 print_list(head);
}
