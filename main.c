#include <stdio.h>
#define SIZE 5
void init(int st[ ]);
void print(int st[ ]);
int isFull(void);
int isEmpty(void);
int push(int st[ ],char item);
int pop(int st[ ]);
int deleteQ(int st[],int st2[]);
int top=0;
int top2=0;
int main() {
int st[SIZE];
int st2[SIZE];
int i,j;
init(st); 
for ( i= 1; i<7; i++) 
if (isFull())   
          printf("Queue overflow, cannot insert %d\n",i);  
          else  push(st,i);  
print(st);  
for ( j= 1; j<6; j++)  
if (isEmpty())   
          printf("Queue Underflow, cannot delete\n");  
           else {      
            printf("Dequeue is %d \n",deleteQ(st,st2));  }
}
int deleteQ(int st[],int st2[])
{
  int i,p,s;
    for(i=top;i>0;i--)
    {
      p = pop(st);
      st2[top2++] = p;
    }
  s = st2[--top2];
    for(i=top2;i>0;i--)
    {
      p = st2[--top2];
      push(st,p);
    }
  return s;
}
void init(int st[ ])
{
  for(int i=0;i<SIZE;i++)
  { 
  st[i]=0;
  }
  top=0;
  top2=0;
}
void print(int st[ ])
{
    printf("Queue : ");
  for(int i=0;i<SIZE;i++)
    printf("%d ",st[i]);
    printf("\n");
}
int isFull(void)
{
  return top == SIZE;
}
int isEmpty(void)
{
  return top == 0;
}
int push(int st[ ],char item)
{
  if (top<SIZE)
  {
    st[top++] = item;
    return 1;
  }
  else {
    printf("stack OverFlow\n");
    return 0;
  }
}
int pop(int st[ ])
{
  char item;
  if (top>0)
  {
    item = st[--top];
    return item;
  }
  else{
    printf("stack UnderFlow\n");
    return 0;
  }
}