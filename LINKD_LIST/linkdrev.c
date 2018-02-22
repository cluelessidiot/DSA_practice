//finding middle element of linkd list in one traversal and o(1) traversal//
#include<stdio.h>
#include<stdlib.h>
#define snode struct linked_list
#define ll long long int
struct linked_list
{
    ll data;
    snode* next;
};

snode* createnode(ll val)
{
   snode* newnode;
    newnode=(snode*)malloc(sizeof(snode));
    if(newnode==NULL)
      { printf("Allocation not  succesfull");
        return NULL;
      }
    newnode->data=val;
    newnode->next=NULL;
    return newnode;

}
snode* insert_front(snode* head)
{
  snode* temp;
  ll val;
  scanf("%lld",&val);
  temp=createnode(val);
  temp->next=head;
  head=temp;
  return head;
}
snode* insert_last(snode* head)
{ snode* temp,*temp2;
   ll val;
   scanf("%lld",&val);
  if(head==NULL)
    { 
       temp=createnode(val);
       temp->next=NULL;
       head=temp;
       return head;
      
    }
  temp=head;
  while(temp->next!=NULL)
   {
     temp=temp->next;
   }  
   temp2=createnode(val);
   temp->next=temp2;
   temp2->next=NULL;
   return head;
}
void print_linkd(snode *head)
{
  if(head==NULL)
     printf("Nothing to print");
  snode* temp;
  temp=head;
   while(temp!=NULL)
     {
           printf("%lld  ",temp->data);
           temp=temp->next;

     }
       printf("/n");
}
snode* reverse(snode* head)
{ snode *ptr,*temp;
  if(head==NULL && head->next==NULL)
     return head;
  else
  {
   ptr=head->next;
   head->next=NULL;
   while(ptr->next!=NULL)
   {
      temp=ptr->next;
      ptr->next=head;
      head=ptr;
      ptr=temp;     

   }
ptr->next=head;
head=ptr;
return head;
  }

}
void main()
{  char ch=' ';
   snode *head=NULL;   

   
   while(ch==' ')
   {
      head=insert_last(head);
       ch=getchar();

   }
   

   head=reverse(head);
    print_linkd(head);
}